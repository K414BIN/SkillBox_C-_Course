cmake_minimum_required(VERSION 3.5)

project(SkillBox LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(SkillBox main.cpp office_worker.cpp office_worker.h office_manager.cpp office_manager.h office_head.cpp office_head.h)


install(TARGETS SkillBox
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
