cmake_minimum_required(VERSION 3.5)
project(Test VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Test main.cpp)
target_compile_features(Test PUBLIC cxx_std_23)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
