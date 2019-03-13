#pragma once
#include "Drink.h"

class AditionDecorator : public Drink
{
public:
	AditionDecorator(Drink *drink) {

		this->drinkWrapper = drink;
	}

	std::string getDescription()
	{
		return this->drinkWrapper->getDescription();
	}

	double cost()
	{
		return this->drinkWrapper->cost();
	}

private:
	Drink *drinkWrapper;
};