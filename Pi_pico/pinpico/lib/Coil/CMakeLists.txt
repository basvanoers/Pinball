add_library(Coil Coil.cpp)

target_link_libraries(Coil
    pico_stdlib
    hardware_gpio hardware_pwm
)
target_include_directories(Coil PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})