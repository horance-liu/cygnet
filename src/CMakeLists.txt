FILE(GLOB_RECURSE all_files
*.cpp
*.cc
*.c++
*.c
*.C)

ADD_LIBRARY(cygnet STATIC ${all_files})
