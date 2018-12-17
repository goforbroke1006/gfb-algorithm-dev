#project(gfb-algorithm-dev
#        VERSION 1.0.0
#        LANGUAGES CXX
#        )
#
#set(CMAKE_CXX_STANDARD 11)
#
#add_library(gfb-algorithm-dev SHARED jarvis-march.h jarvis-march.cpp)
#
#set_target_properties(gfb-algorithm-dev PROPERTIES PUBLIC_HEADER
#        jarvis-march.h
#        )
#
#install(TARGETS gfb-algorithm-dev
#        LIBRARY DESTINATION lib
#        PUBLIC_HEADER DESTINATION include/${PROJECT_NAME}
#        )