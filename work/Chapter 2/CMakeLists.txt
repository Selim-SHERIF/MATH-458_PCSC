include_directories(".")

# The next lines represent a list of all the executables in the folder (chapter)
# There is typically one executable per exercise.
# As you solve exercises, you need to add them here.
# The syntax is add_executable(executable_name source_file_name

add_executable(first_if first_if.cpp)
add_executable(first_if_else first_if_else.cpp)
add_executable(second_if_else second_if_else.cpp)
add_executable(sum_integers sum_integers.cpp)
add_executable(Vector_Matrix_Operations Vector_Matrix_Operations.cpp)
add_executable(Matrix_Inverse Matrix_Inverse.cpp)
add_executable(Newton_Raphson Newton_Raphson.cpp)


