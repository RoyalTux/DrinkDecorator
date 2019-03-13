#pragma once
#include "Drink.h"

class Coffee : public Drink
{
public:
	Coffee() {
		description = "Espresso";
	}

	double cost() {
		return 1.53;
	}
};