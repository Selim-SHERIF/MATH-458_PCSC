include_directories(".")

# The next lines represent a list of all the executables in the folder (chapter)
# There is typically one executable per exercise.
# As you solve exercises, you need to add them here.
# The syntax is add_executable(executable_name source_file_name)

add_executable(Test "Hello_World.cpp")
add_executable(Multiply_2_scalars "Multiply_2_scalars.cpp")
add_executable(2_vectors  "2_vectors.cpp")
add_executable(4_Matrices "4_Matrices.cpp")
add_executable(User_name "User_name.cpp")
add_executable(Average "Average.cpp")

