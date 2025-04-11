set(HEADER_FILES
        include/orchestration/orchestration.h
        include/orchestration/scheduler.h)

set(SOURCE_FILES
        src/orchestration.cpp
        src/scheduler.cpp)

add_library(orchestration STATIC ${SOURCE_FILES})

target_include_directories(orchestration PRIVATE include/orchestration)
target_include_directories(orchestration PUBLIC include)

target_link_libraries(orchestration LINK_PRIVATE mode_control)