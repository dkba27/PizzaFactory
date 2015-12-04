/*
 * Deluxe.h
 *
 *  Created on: Dec 3, 2015
 *      Author: adminuser
 */

#ifndef DELUXEPIZZA_H_
#define DELUXEPIZZA_H_

#include "Pizza.h"

class DeluxePizza : public Pizza
{
public:
	virtual int getPrice(){ return 1150; };
	virtual ~DeluxePizza(){};
};


#endif /* DELUXEPIZZA_H_ */
