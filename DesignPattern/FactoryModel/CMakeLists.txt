SET(LIB_FACTORY_MODEL_SRC SimpleFactory.cpp FactoryMethod.cpp AbstractFactory.cpp) 

#SET(CMAKE_BUILD_TYPE "Debug") 
#SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")

ADD_LIBRARY(factoryModel_static STATIC ${LIB_FACTORY_MODEL_SRC})