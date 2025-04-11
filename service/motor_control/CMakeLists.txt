set(HEADER_FILES
        include/motor_control/motor_control.h)

set(SOURCE_FILES
        src/motor_control.cpp)

add_library(motor_control STATIC ${SOURCE_FILES})

target_include_directories(motor_control PRIVATE include/motor_control)
target_include_directories(motor_control PUBLIC include)
