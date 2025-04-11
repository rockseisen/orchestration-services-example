set(HEADER_FILES
        include/attitude_control/attitude_control.h)

set(SOURCE_FILES
        src/attitude_control.cpp)

add_library(attitude_control STATIC ${SOURCE_FILES})

target_include_directories(attitude_control PRIVATE include/attitude_control)
target_include_directories(attitude_control PUBLIC include)
