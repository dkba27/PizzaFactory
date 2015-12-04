/*
 * main.cpp
 *
 *  Created on: Dec 3, 2015
 *      Author: adminuser
 */
#include <iostream>
#include "PizzaFactory.h"

using namespace std;

void pizza_info( PizzaFactory::PizzaType pizzaType)
{
	Pizza* pizza = PizzaFactory::createPizza(pizzaType);
	cout << "Price of " << pizzaType << " is " << pizza->getPrice() << endl;

	delete pizza;

}

int main()
{
	pizza_info(PizzaFactory::Pepperoni);
}
