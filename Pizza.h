/*
 * Pizza.h
 *
 *  Created on: Dec 3, 2015
 *      Author: adminuser
 */

#ifndef PIZZA_H_
#define PIZZA_H_

class Pizza
{
public:
	virtual int getPrice() const = 0;
	virtual ~Pizza(){}; // w/out virtual no derived d-tor will be called.
};



#endif /* PIZZA_H_ */
