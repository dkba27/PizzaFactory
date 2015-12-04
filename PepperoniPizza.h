/*
 * Pepperoni.h
 *
 *  Created on: Dec 3, 2015
 *      Author: adminuser
 */

#ifndef PEPPERONIPIZZA_H_
#define PEPPERONIPIZZA_H_

#include "Pizza.h"

class PepperoniPizza : public Pizza
{
public:
	PepperoniPizza(){};
	virtual int getPrice();
	virtual ~PepperoniPizza(){};
};


#endif /* PEPPERONIPIZZA_H_ */
