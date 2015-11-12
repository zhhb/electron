// Copyright (c) 2013 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#include "atom/common/options_switches.h"

namespace atom {

namespace switches {

const char kTitle[]      = "title";
const char kIcon[]       = "icon";
const char kFrame[]      = "frame";
const char kShow[]       = "show";
const char kCenter[]     = "center";
const char kX[]          = "x";
const char kY[]          = "y";
const char kWidth[]      = "width";
const char kHeight[]     = "height";
const char kMinWidth[]   = "minWidth";
const char kMinHeight[]  = "minHeight";
const char kMaxWidth[]   = "maxWidth";
const char kMaxHeight[]  = "maxHeight";
const char kResizable[]  = "resizable";
const char kFullscreen[] = "fullscreen";

// Whether the window should show in taskbar.
const char kSkipTaskbar[] = "skipTaskbar";

// Start with the kiosk mode, see Opera's page for description:
// http://www.opera.com/support/mastering/kiosk/
const char kKiosk[] = "kiosk";

// Make windows stays on the top of all other windows.
const char kAlwaysOnTop[] = "alwaysOnTop";

// Enable the NSView to accept first mouse event.
const char kAcceptFirstMouse[] = "acceptFirstMouse";

// Whether window size should include window frame.
const char kUseContentSize[] = "useContentSize";

// The requested title bar style for the window
const char kTitleBarStyle[] = "titleBarStyle";

// The menu bar is hidden unless "Alt" is pressed.
const char kAutoHideMenuBar[] = "autoHideMenuBar";

// Enable window to be resized larger than screen.
const char kEnableLargerThanScreen[] = "enableLargerThanScreen";

// Forces to use dark theme on Linux.
const char kDarkTheme[] = "darkTheme";

// Whether the window should be transparent.
const char kTransparent[] = "transparent";

// Window type hint.
const char kType[] = "type";

// Disable auto-hiding cursor.
const char kDisableAutoHideCursor[] = "disableAutoHideCursor";

// Use the OS X's standard window instead of the textured window.
const char kStandardWindow[] = "standardWindow";

// Default browser window background color.
const char kBackgroundColor[] = "backgroundColor";

// The WebPreferences.
const char kWebPreferences[] = "webPreferences";

// The factor of which page should be zoomed.
const char kZoomFactor[] = "zoomFactor";

// Script that will be loaded by guest WebContents before other scripts.
const char kPreloadScript[] = "preload";

// Like --preload, but the passed argument is an URL.
const char kPreloadUrl[] = "preloadUrl";

// Enable the node integration.
const char kNodeIntegration[] = "nodeIntegration";

// Instancd ID of guest WebContents.
const char kGuestInstanceID[] = "guestInstanceId";

// Web runtime features.
const char kExperimentalFeatures[]       = "experimentalFeatures";
const char kExperimentalCanvasFeatures[] = "experimentalCanvasFeatures";
const char kOverlayScrollbars[]          = "overlayScrollbars";
const char kOverlayFullscreenVideo[]     = "overlayFullscreenVideo";
const char kSharedWorker[]               = "sharedWorker";

// Enable plugins.
const char kEnablePlugins[] = "enable-plugins";

// Ppapi Flash path.
const char kPpapiFlashPath[] = "ppapi-flash-path";

// Ppapi Flash version.
const char kPpapiFlashVersion[] = "ppapi-flash-version";

// Set page visiblity to always visible.
const char kPageVisibility[] = "page-visibility";

// Enable DirectWrite on Windows.
const char kDirectWrite[] = "direct-write";

// Path to client certificate.
const char kClientCertificate[] = "client-certificate";

// Disable HTTP cache.
const char kDisableHttpCache[] = "disable-http-cache";

// Register schemes to standard.
const char kRegisterStandardSchemes[] = "register-standard-schemes";

// The minimum SSL/TLS version ("tls1", "tls1.1", or "tls1.2") that
// TLS fallback will accept.
const char kSSLVersionFallbackMin[] = "ssl-version-fallback-min";

// Comma-separated list of SSL cipher suites to disable.
const char kCipherSuiteBlacklist[] = "cipher-suite-blacklist";

// The browser process app model ID
const char kAppUserModelId[] = "app-user-model-id";

}  // namespace switches

}  // namespace atom
