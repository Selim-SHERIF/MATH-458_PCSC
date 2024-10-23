include_directories(".")

# The next lines represent a list of all the executables in the folder (chapter)
# There is typically one executable per exercise.
# As you solve exercises, you need to add them here.
# The syntax is add_executable(executable_name source_file_name

add_executable(5.1_first_function 5.1_first_function.cpp)
add_executable(5.2_second_function 5.2_second_function.cpp)
add_executable(5.3_third_function 5.3_third_function.cpp)
add_executable(5.4_mean_std 5.4_mean_std.cpp)
add_executable(5.5_Matrix_Multiplication "5.5(6)_Multiplication.cpp")
add_executable(5.7_norm 5.7_norm.cpp)
add_executable(5.8_determinant 5.8_determinant.cpp)