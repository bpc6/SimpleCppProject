# Google Test setup
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.12.0
)

FetchContent_MakeAvailable(googletest)

# Add the test executable
add_executable(SimpleTest simple_test.cc)
target_link_libraries(SimpleTest gtest gtest_main pthread MySimpleProjectLib)
