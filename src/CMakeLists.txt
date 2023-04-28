# Create a library from the source files
add_library(MySimpleProjectLib simple.cc)

# Add the main executable
add_executable(MyExecutable main.cc)
target_link_libraries(MyExecutable MySimpleProjectLib)