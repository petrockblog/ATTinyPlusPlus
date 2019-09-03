cmake_minimum_required(VERSION 2.8)

add_avr_library(
   hal-button
   button.h
   MomentaryButton.cpp
   MomentaryButton.h
   )

add_avr_library(
	hal-led
		Led.h
	logicLED.h
	logicLED.cpp
	PWMLed.cpp
	PWMLed.h
	)
