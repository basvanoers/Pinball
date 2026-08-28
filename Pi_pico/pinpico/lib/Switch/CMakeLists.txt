add_library(Switch Switch.cpp)

target_link_libraries(Switch
    pico_stdlib
)
target_include_directories(Switch PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})