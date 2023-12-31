# Qt 4.8.7 statically compiled (for our need and our respect to GPLv3 )
This is a statically compiled version of QT4.8.7 for Windows XP, compiled with MSC_VER 1916 ( latest Visual Studio 2017), running with MSVC runtime 14.27 ( VS2015-2019).  
Compiled with -Zc:wchar_t- -D_MSC_VER=1916 -DWIN32 -D_USING_V140_SDK71_ -DUNICODE -DWIN32  
For using static libs (stored in lib) you need in VS2017:
- use toolset and platform
- in c++ language select to NOT use Wchar_t as an internal type
- in c++ code generation choose /MD (or /MDd) for multithread DLL
- install QT extension for VS2017 (in VS Market place) and configures it by pointing qmake.exe
- if needed for debugging install qt4.natvis.xml to AppData\Local\QtMsBuild

Compiling under VS2017 Community edition
- Make sure VS2017 is installed with Windows XP ( v141_xp ) support
- in a VS2017 x86 native command prompt run CONFUGURE.cmd (and wait)


# This is Qt version 4.8.7.

Qt is a comprehensive cross-platform C++ application framework. Qt 4
introduces new features and many improvements over the 3.x series. See
https://doc.qt.io/archives/qt-4.8/qml-intro.html for details.

The Qt 4.x series is not binary compatible or source compatible with
the 3.x series. For more information on porting from Qt 3 to Qt 4, see
https://doc.qt.io/archives/qt-4.8/porting4.html.


# INSTALLING Qt

If you have a source package (a .tar.gz, or .zip file), follow the
instructions in the INSTALL file.

On Windows and Mac OS X, if you want to install the precompiled binary
packages, simply launch the package and follow the instructions in the
installation wizard.

For Mac OS X Carbon, the binary package requires Mac OS X 10.4 (Tiger) or
later and GCC 4.0.1 to develop applications. Its applications will run
on Mac OS X 10.4 and above.

For Mac OS X Cocoa, the binary package requires Mac OS X 10.5 (Leopard) or
later and GCC 4.0.1 to develop applications.  Its applications will run
on Mac OS X 10.5 and above.


# DEMOS AND EXAMPLES

Once Qt is installed, we suggest that you take a look at the demos and
examples to see Qt in action.

For desktop computers, run the Qt Examples and Demos either by
typing 'qtdemo' on the command line or through the desktop's Start
menu. On Mac OS X, you can find it in /Developers/Applications/Qt.

For embedded devices, launch the Qt 'fluidlauncher' demo, either through 
the platforms filebrowser or the built in menu system.


# REFERENCE DOCUMENTATION

The Qt reference documentation is available locally in Qt's doc/html
directory. You can use Qt Assistant to view it; to launch Assistant,
type 'assistant' on the command line or use the Start menu. On Mac OS
X, you can find it in /Developer/Applications/Qt.  The latest
documentation is available at https://doc.qt.io/archives/qt-4.8/index.html.


# SUPPORTED PLATFORMS

For a complete list of supported platforms, see
https://doc.qt.io/archives/qt-4.8/supported-platforms.html.


# COMMERCIAL EDITIONS

Desktop Edition licensees can use all the modules provided with their
Qt package.

GUI Framework licensees may only use the classes contained in
the QtCore, QtGui (except QGraphicsView), QtTest, QtDBus and
Qt3Support modules.

For a full listing of the contents of each module, please refer to 
https://doc.qt.io/archives/qt-4.8/modules.html


# HOW TO REPORT A BUG

If you think you have found a bug in Qt, we would like to hear about
it so that we can fix it.  The Qt bug tracking system is open to the
public at https://bugreports.qt.io/. Before reporting a bug, please use
the bug-tracker's search functions.

Always include the following information in your bug report: the name
and version number of your compiler; the name and version number of
your operating system; the version of Qt you are using, and what
configure options it was compiled with.

If the problem you are reporting is only visible at run-time, try to
create a small test program that shows the problem when run. Often,
such a program can be created with some minor changes to one of the many
example programs in Qt's examples directory, or to the autotests that
are available in the public source repository on https://code.qt.io/.


Qt is a trademark of The Qt Company Ltd.
