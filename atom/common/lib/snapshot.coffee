# Hook JS compilation if snapshot file is present.
return unless global.__ATOM_SHELL_SNAPSHOT? and process.resourcesPath

path = require 'path'
Module = require 'module'

# The custom snapshot file is only availabe when packaged with "asar" utility,
# so we can assume app is under "app.asar"
packagePath = path.join process.resourcesPath, 'app.asar'

# The original routine of compiling JS.
compileJs = Module._extensions['.js']

# Load the JS function directly if it is in snapshot file.
Module._extensions['.js'] = (module, filename) ->
  relativePath = path.relative packagePath, filename
  compiledWrapper = global.__ATOM_SHELL_SNAPSHOT[relativePath]
  return compileJs module, filename unless compiledWrapper?

  # Emulate the "module._compile"
  require = (path) -> module.require path
  require.resolve = (request) -> Module._resolveFilename request, module
  require.main = process.mainModule
  require.extensions = Module._extensions
  require.cache = Module._cache
  args = [module.exports, require, module, filename, path.dirname(filename)]
  compiledWrapper.apply module.exports, args
