cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 11)

project(gfb-algorithm-dev
        VERSION 1.0.0
        LANGUAGES CXX
        )

#include("${JAVA_HOME}/include")

find_package(Java REQUIRED)
find_package(JNI REQUIRED)
include_directories(${JNI_INCLUDE_DIRS})


add_library(gfb-algorithm-dev SHARED
        include/jarvis-march.h src/jarvis-march.cpp
        include/java/com_goforbroke1006_algorithm_JarvisMarch.h src/java/com_goforbroke1006_algorithm_JarvisMarch.cpp
        )

set(HDR_PUBLIC
        include/jarvis-march.h
        )
set_target_properties(gfb-algorithm-dev PROPERTIES PUBLIC_HEADER "${HDR_PUBLIC}")
install(TARGETS gfb-algorithm-dev
        LIBRARY DESTINATION lib
        PUBLIC_HEADER DESTINATION include/${PROJECT_NAME}
        )

add_subdirectory(test)
