# Google Test setup
enable_testing()
add_subdirectory(../extern/googletest googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Add the test executable
add_executable(SimpleTest simple_test.cc ../src/simple.cc)
target_link_libraries(SimpleTest gtest gtest_main pthread)