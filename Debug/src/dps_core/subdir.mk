################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/dps_core/direction.cpp \
../src/dps_core/directional_fft.cpp \
../src/dps_core/dps_core.cpp 

OBJS += \
./src/dps_core/direction.o \
./src/dps_core/directional_fft.o \
./src/dps_core/dps_core.o 

CPP_DEPS += \
./src/dps_core/direction.d \
./src/dps_core/directional_fft.d \
./src/dps_core/dps_core.d 


# Each subdirectory must supply rules for building sources it contributes
src/dps_core/%.o: ../src/dps_core/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


