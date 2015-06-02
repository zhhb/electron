return (process, require, asarSource, snapshotSource) ->
  {createArchive} = process.binding 'atom_common_asar'

  # Make source files accessible via "require".
  source = process.binding 'natives'
  source.ATOM_SHELL_ASAR = asarSource
  source.ATOM_SHELL_SNAPSHOT = snapshotSource

  # Initialize snapshot support for "require".
  require 'ATOM_SHELL_SNAPSHOT'

  # Monkey-patch the fs module.
  require('ATOM_SHELL_ASAR').wrapFsWithAsar require('fs')

  # Make graceful-fs work with asar.
  source['original-fs'] = source.fs
  source['fs'] = """
    var src = '(function (exports, require, module, __filename, __dirname) { ' +
              process.binding('natives')['original-fs'] +
              ' });';
    var vm = require('vm');
    var fn = vm.runInThisContext(src, { filename: 'fs.js' });
    fn(exports, require, module);
    var asar = require('ATOM_SHELL_ASAR');
    asar.wrapFsWithAsar(exports);
  """
