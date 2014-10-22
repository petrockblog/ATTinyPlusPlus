################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/mcal/SoftwareSerial.cpp \
../src/mcal/cppinterrupt.cpp \
../src/mcal/gpio.cpp \
../src/mcal/pwm.cpp \
../src/mcal/systemtick.cpp \
../src/mcal/timer.cpp 

OBJS += \
./src/mcal/SoftwareSerial.o \
./src/mcal/cppinterrupt.o \
./src/mcal/gpio.o \
./src/mcal/pwm.o \
./src/mcal/systemtick.o \
./src/mcal/timer.o 

CPP_DEPS += \
./src/mcal/SoftwareSerial.d \
./src/mcal/cppinterrupt.d \
./src/mcal/gpio.d \
./src/mcal/pwm.d \
./src/mcal/systemtick.d \
./src/mcal/timer.d 


# Each subdirectory must supply rules for building sources it contributes
src/mcal/%.o: ../src/mcal/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/Users/florian/github/local/ATTinyPlusPlus/src/app" -I"/Users/florian/github/local/ATTinyPlusPlus/src/lib" -I"/Users/florian/github/local/ATTinyPlusPlus/src/mcal" -I"/Users/florian/github/local/ATTinyPlusPlus/src/sys" -I"/Users/florian/github/local/ATTinyPlusPlus/src/hal" -I"/Users/florian/github/local/ATTinyPlusPlus/src/lib/STL" -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=attiny85 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


