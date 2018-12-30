if (CMAKE_CXX_COMPILER_ID MATCHES GNU)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
endif ()

include(CTest)

add_executable(
        unit_tests
        jarvis-march.cpp
        main.cpp
        sort.cpp)
target_link_libraries(
        unit_tests
        gtest
        gtest_main
        gfb-algorithm-dev
)

add_test(
        NAME
        unit
        COMMAND
        unit_tests
)
