set(HEADER_FILES
        include/input_control/input_control.h)

set(SOURCE_FILES
        src/input_control.cpp)

add_library(input_control STATIC ${SOURCE_FILES})

target_include_directories(input_control PRIVATE include/input_control)
target_include_directories(input_control PUBLIC include)
