for /f "delims=" %%i in ('dir/b/s/a-d^|findstr/ev "\.bat | \.sh | CMakeLists.txt"') do del %%i
rmdir /s/q .\bin
rmdir /s/q .\lib
rmdir /s/q .\CMakeFiles