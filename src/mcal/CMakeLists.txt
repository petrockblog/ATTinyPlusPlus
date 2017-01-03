cmake_minimum_required(VERSION 2.8)

add_avr_library(
	mcal
	USITWISlave.cpp
	USITWISlave.h
	adconverter.cpp
	adconverter.h
	cppinterrupt.cpp
	cppinterrupt.h
	digitalio.h
	digitalio_attiny85.cpp
	digitalio_attiny85.h
	mcal.h
	pwm.h
	pwm_attiny85.cpp
	pwm_attiny85.h
	register_access.h
	systemtick.h
	systemtick_attiny85.cpp
	systemtick_attiny85.h
	timer.h
   )
