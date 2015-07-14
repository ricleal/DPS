################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cctbx/uctbx/crystal_orientation.cpp \
../src/cctbx/uctbx/spoil_optimization.cpp \
../src/cctbx/uctbx/uctbx.cpp 

OBJS += \
./src/cctbx/uctbx/crystal_orientation.o \
./src/cctbx/uctbx/spoil_optimization.o \
./src/cctbx/uctbx/uctbx.o 

CPP_DEPS += \
./src/cctbx/uctbx/crystal_orientation.d \
./src/cctbx/uctbx/spoil_optimization.d \
./src/cctbx/uctbx/uctbx.d 


# Each subdirectory must supply rules for building sources it contributes
src/cctbx/uctbx/%.o: ../src/cctbx/uctbx/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/rhf/git/DPS/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


