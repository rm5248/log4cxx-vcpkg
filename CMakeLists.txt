cmake_minimum_required (VERSION 3.13)
project( log4cxx-test-vcpkg )

find_package(log4cxx CONFIG REQUIRED)
find_package(fmt)

add_executable(testapp main.cpp)
target_link_libraries(testapp log4cxx)
