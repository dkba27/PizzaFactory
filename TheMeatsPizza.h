/*
 * TheMeats.h
 *
 *  Created on: Dec 3, 2015
 *      Author: adminuser
 */

#ifndef THEMEATSPIZZA_H_
#define THEMEATSPIZZA_H_

#include "Pizza.h"

class TheMeatsPizza : public Pizza
{
public:
	virtual int getPrice(){ return 1250; };
	virtual ~TheMeatsPizza(){};
};


#endif /* THEMEATSPIZZA_H_ */
