set(alex_lib_source_files lex.c)
set(alex_exe_source_files main.c)

add_library(alex_lib ${alex_lib_source_files})
target_include_directories(alex_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(alex_lib PROPERTIES COMPILE_FLAGS "-ggdb -Wall -Wextra -Werror")

add_executable(alex ${alex_exe_source_files})
target_link_libraries(alex alex_lib)
set_target_properties(alex PROPERTIES COMPILE_FLAGS "-ggdb -Wall -Wextra -Werror")

add_subdirectory(test)
