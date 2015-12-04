################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../DeluxePizza.cpp \
../PepperoniPizza.cpp \
../PizzaFactory.cpp \
../TheMeatsPizza.cpp \
../main.cpp 

OBJS += \
./DeluxePizza.o \
./PepperoniPizza.o \
./PizzaFactory.o \
./TheMeatsPizza.o \
./main.o 

CPP_DEPS += \
./DeluxePizza.d \
./PepperoniPizza.d \
./PizzaFactory.d \
./TheMeatsPizza.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


