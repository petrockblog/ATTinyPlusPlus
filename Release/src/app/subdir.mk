################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/app/main.cpp 

OBJS += \
./src/app/main.o 

CPP_DEPS += \
./src/app/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/app/%.o: ../src/app/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/Users/florian/github/local/ATTinyPlusPlus/src/app" -I"/Users/florian/github/local/ATTinyPlusPlus/src/lib" -I"/Users/florian/github/local/ATTinyPlusPlus/src/mcal" -I"/Users/florian/github/local/ATTinyPlusPlus/src/sys" -I"/Users/florian/github/local/ATTinyPlusPlus/src/hal" -I"/Users/florian/github/local/ATTinyPlusPlus/src/lib/STL" -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=attiny85 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


