set(HEADER_FILES
        include/mode_control/mode_control.h)

set(SOURCE_FILES
        src/mode_control.cpp)

add_library(mode_control STATIC ${SOURCE_FILES})

target_include_directories(mode_control PRIVATE include/mode_control)
target_include_directories(mode_control PUBLIC include)
