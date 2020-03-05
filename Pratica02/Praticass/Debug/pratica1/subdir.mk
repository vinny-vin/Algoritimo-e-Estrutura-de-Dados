################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../pratica1/pratica01.cpp \
../pratica1/veiculo.cpp 

OBJS += \
./pratica1/pratica01.o \
./pratica1/veiculo.o 

CPP_DEPS += \
./pratica1/pratica01.d \
./pratica1/veiculo.d 


# Each subdirectory must supply rules for building sources it contributes
pratica1/%.o: ../pratica1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


