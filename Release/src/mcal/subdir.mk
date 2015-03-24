################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/mcal/USITWISlave.cpp \
../src/mcal/adconverter.cpp \
../src/mcal/cppinterrupt.cpp \
../src/mcal/digitalio_attiny85.cpp \
../src/mcal/pwm_attiny85.cpp \
../src/mcal/systemtick_attiny85.cpp 

OBJS += \
./src/mcal/USITWISlave.o \
./src/mcal/adconverter.o \
./src/mcal/cppinterrupt.o \
./src/mcal/digitalio_attiny85.o \
./src/mcal/pwm_attiny85.o \
./src/mcal/systemtick_attiny85.o 

CPP_DEPS += \
./src/mcal/USITWISlave.d \
./src/mcal/adconverter.d \
./src/mcal/cppinterrupt.d \
./src/mcal/digitalio_attiny85.d \
./src/mcal/pwm_attiny85.d \
./src/mcal/systemtick_attiny85.d 


# Each subdirectory must supply rules for building sources it contributes
src/mcal/%.o: ../src/mcal/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/Users/florian/github/local/ATTinyPlusPlus/src/hal" -I"/Users/florian/github/local/ATTinyPlusPlus/src/sys" -I"/Users/florian/github/local/ATTinyPlusPlus/src/mcal" -I"/Users/florian/github/local/ATTinyPlusPlus/src/lib" -I"/Users/florian/github/local/ATTinyPlusPlus/src/app" -I"/Users/florian/github/local/ATTinyPlusPlus/src/lib/STL" -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -funsigned-char -funsigned-bitfields -fno-exceptions -std=c++0x -mmcu=attiny85 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


