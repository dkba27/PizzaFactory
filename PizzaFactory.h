/*
 * PizzaFactory.h
 *
 *  Created on: Dec 3, 2015
 *      Author: adminuser
 */

#ifndef PIZZAFACTORY_H_
#define PIZZAFACTORY_H_


#include "DeluxePizza.h"
#include "PepperoniPizza.h"
#include "TheMeatsPizza.h"

class PizzaFactory
{
public:
	enum PizzaType { Deluxe, Pepperoni, TheMeats };
	static Pizza *createPizza( PizzaType );
};


#endif /* PIZZAFACTORY_H_ */
