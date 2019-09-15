# to install gtest library
#https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/

cmake_minimum_required(VERSION 3.0)

include_directories(src)
include_directories(include)
include_directories(test)


add_executable(gtestApp test/testall_main.cpp
  test/Addition_test.cpp
  test/Multiplication_test.cpp
  test/Mystring_test.cpp
  src/Addition.cpp
  src/Multiply.cpp
  src/Mystring.cpp)

target_link_libraries(gtestApp gtest gtest_main pthread)
