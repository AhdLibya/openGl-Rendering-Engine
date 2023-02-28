cmake_minimum_required(VERSION 3.6)

project(AHDENGINE VERSION 0.1)

configure_file(AHDENGINECONFIG.h.in
             AHDENGINE.h)

add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

# DOWNLOAD ALL THE SUBMODULES
#find_package(GIT QUIET)

#if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
#    option(GIT_SUBMODULE "Check submodules during build" ON)
#    if(GIT_SUBMODULE)
#        message(STUTUS "Submodules update")
#        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive)
#                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#                        RESULT_VARIABLE GIT_SUBMOD_RESULT
#        if(NOT GIT_SUBMOD_RESULT EQUAL "0")
#            message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT} , Please")
#        endif()
#    endif()
#endif()
        
    
    

add_subdirectory(include/glfw)

target_include_directories(${PROJECT_NAME} PUBLIC include/glfw/include)

target_link_directories(${PROJECT_NAME} PRIVATE include/glfw/src)

target_link_libraries(${PROJECT_NAME} glfw)