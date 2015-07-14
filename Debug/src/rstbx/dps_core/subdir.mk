################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/rstbx/dps_core/direction.cpp \
../src/rstbx/dps_core/directional_fft.cpp \
../src/rstbx/dps_core/dps_core.cpp 

OBJS += \
./src/rstbx/dps_core/direction.o \
./src/rstbx/dps_core/directional_fft.o \
./src/rstbx/dps_core/dps_core.o 

CPP_DEPS += \
./src/rstbx/dps_core/direction.d \
./src/rstbx/dps_core/directional_fft.d \
./src/rstbx/dps_core/dps_core.d 


# Each subdirectory must supply rules for building sources it contributes
src/rstbx/dps_core/%.o: ../src/rstbx/dps_core/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/rhf/git/DPS/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


