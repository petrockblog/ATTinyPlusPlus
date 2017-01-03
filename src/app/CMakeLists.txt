cmake_minimum_required(VERSION 2.8)

add_avr_executable(
   powerblock
   main.cpp
   PowerSwitch.cpp
   PowerSwitch.h
   PowerSwitchState.cpp
   PowerSwitchState.h
   )

target_link_libraries(
   powerblock-${AVR_MCU}.elf
   hal-button-${AVR_MCU}
   hal-led-${AVR_MCU}
   mcal-${AVR_MCU}
   sys-cpp-${AVR_MCU}
   )
