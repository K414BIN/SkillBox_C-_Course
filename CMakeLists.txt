cmake_minimum_required(VERSION 3.23)
project(SkillBox)

set(CMAKE_CXX_STANDARD 17)

add_executable(SkillBox main.cpp "Branch.h" "Tree.h" "Branch.cpp" "Tree.cpp" "Twig.h" "Twig.cpp" "Elf.h" "Elf.cpp" "Village.h" "Village.cpp" "House.h" "House.cpp" "Settlement.h" "Settlement.cpp")
