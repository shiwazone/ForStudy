LINK_LIBRARIES(factoryModel_static)
SET(CMAKE_BUILD_TYPE "Debug") 
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
ADD_EXECUTABLE(DesignPattern main.cpp)