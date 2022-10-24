cmake_minimum_required(VERSION 3.23)
project(hello_world C)

set(CMAKE_C_STANDARD 99)

add_executable(hello_world ../basic-of-c/hello.c ../basic-of-c/testsizeof.c ../basic-of-c/testspec.c ../basic-of-c/opetators.c ../basic-of-c/array.c ../basic-of-c/strings.c ../basic-of-c/scanftest.c ../test-include/main.c ../test-include/num.c ../test-include/mainalt.c ../test-include/num.h ../test-macros/first.c ../test-macros/second.c ../test-macros/third.c ../test-macros/fourth.c ../test-macros/fifth.c ../test-functions/parameters/factorial.c ../test-functions/parameters/excange.c ../test-functions/parameters/add.c ../test-functions/return/factorial.c ../test-functions/return/exchange.c ../test-functions/recursion/factorial.c ../test-functions/recursion/fibonachi.c ../test-functions/scope/global.c ../test-functions/scope/auto.c ../test-functions/scope/shadows.c ../test-functions/scope/static.c ../test-functions/extern/app.c ../test-functions/extern/lib.c ../examples-pointer/basic/first.c ../examples-pointer/basic/second.c ../examples-pointer/basic/third.c)
