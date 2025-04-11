set(SOURCE_FILES
        src/main.cpp)

add_executable(avionik-orchestrator ${SOURCE_FILES})

target_link_libraries(avionik-orchestrator LINK_PRIVATE mode_control)
