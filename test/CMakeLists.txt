# Google Test setup
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

# Add the test executable
add_executable(SimpleTest simple_test.cc ../src/simple.cc)
target_link_libraries(SimpleTest gtest gtest_main pthread)