################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../fila.cpp \
../impressora.cpp \
../lista.cpp \
../pilha.cpp \
../polonesa.cpp 

OBJS += \
./fila.o \
./impressora.o \
./lista.o \
./pilha.o \
./polonesa.o 

CPP_DEPS += \
./fila.d \
./impressora.d \
./lista.d \
./pilha.d \
./polonesa.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


