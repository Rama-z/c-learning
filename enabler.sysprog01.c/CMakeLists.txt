cmake_minimum_required(VERSION 3.26)

# Set the project name and version
project(c_samples VERSION 1.0 LANGUAGES C)

# Set C standard
set(CMAKE_C_STANDARD 99)

# Detect the operating system and force architecture on macOS
if(APPLE)
    set(CMAKE_OSX_ARCHITECTURES "x86_64" CACHE STRING "Build architecture for Mac OS X" FORCE)
endif()


# Create executable targets
add_executable(tipe_data tipe_data.c)
add_executable(tipe_bool tipe_bool.c)
add_executable(basic_io basic_io.c)
add_executable(basic_io_if basic_io_if.c)
add_executable(basic_io_ifelse basic_io_ifelse.c)
add_executable(basic_io_switch basic_io_switch.c)
add_executable(basic_math basic_math.c)
add_executable(basic_compare basic_compare.c)
add_executable(basic_compare_bool basic_compare_bool.c)
add_executable(basic_function basic_function.c)
add_executable(basic_function_proto basic_function_proto.c)
add_executable(basic_function_noret basic_function_noret.c)
add_executable(basic_function_multi basic_function_multi.c basic_functions.c)
add_executable(basic_ptr basic_ptr.c)
add_executable(basic_ptr_arr basic_ptr_arr.c)
add_executable(basic_ptr_func basic_ptr_func.c)
add_executable(basic_struct basic_struct.c)
add_executable(basic_struct_arr basic_struct_arr.c)
add_executable(basic_union basic_union.c)
add_executable(basic_preproc basic_preproc.c)
add_executable(basic_preproc_token_pasting basic_preproc_token_pasting.c)
add_executable(basic_typedef basic_typedef.c)
