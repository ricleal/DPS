################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cctbx/sgtbx/change_of_basis_op.cpp \
../src/cctbx/sgtbx/rot_mx.cpp \
../src/cctbx/sgtbx/rt_mx.cpp \
../src/cctbx/sgtbx/tr_vec.cpp \
../src/cctbx/sgtbx/utils.cpp 

OBJS += \
./src/cctbx/sgtbx/change_of_basis_op.o \
./src/cctbx/sgtbx/rot_mx.o \
./src/cctbx/sgtbx/rt_mx.o \
./src/cctbx/sgtbx/tr_vec.o \
./src/cctbx/sgtbx/utils.o 

CPP_DEPS += \
./src/cctbx/sgtbx/change_of_basis_op.d \
./src/cctbx/sgtbx/rot_mx.d \
./src/cctbx/sgtbx/rt_mx.d \
./src/cctbx/sgtbx/tr_vec.d \
./src/cctbx/sgtbx/utils.d 


# Each subdirectory must supply rules for building sources it contributes
src/cctbx/sgtbx/%.o: ../src/cctbx/sgtbx/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/rhf/git/DPS/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


