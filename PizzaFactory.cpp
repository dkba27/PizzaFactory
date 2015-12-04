/*
 * PizzaFactory.cpp
 *
 *  Created on: Dec 3, 2015
 *      Author: adminuser
 */

#include "PizzaFactory.h"
#include <stdexcept>

Pizza * PizzaFactory::createPizza(PizzaType pizzaType)
{
	switch (pizzaType)
	{
	case Pepperoni: return new PepperoniPizza();
	case PizzaFactory::Deluxe: return new DeluxePizza();
	case PizzaFactory::TheMeats: return new TheMeatsPizza();
	}
	throw "invalid pizza type.";
}

