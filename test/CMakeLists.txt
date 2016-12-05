FILE(GLOB_RECURSE all_files
*.cpp
*.cc
*.c++
*.c
*.C)

ADD_EXECUTABLE(cygnet-test ${all_files})
TARGET_LINK_LIBRARIES(cygnet-test cut)
