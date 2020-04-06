shopt -s extglob
rm -rf !(*.bat|*.sh|CMakeLists.txt)
rm -rf ./bin
rm -rf ./lib
rm -rf ./CMakeFiles
shopt -u extglob

