REM %comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Auxiliary\Build\vcvars32.bat"
NMAKE clean
configure.exe -shared -opensource -nomake examples -nomake demos -no-scripttools -no-script -platform win32-msvc2017 -no-sse2 -no-sse -no-opengl -no-directwrite -debug-and-release -confirm-license
NMAKE