#pragma once
#include "Drink.h"

class Tea : public Drink
{
public:
	Tea() {
		description = "Tea";
	}

	double cost() {
		return 0.75;
	}
};