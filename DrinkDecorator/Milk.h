#pragma once
#include "AditionDecorator.h"

class Milk : public AditionDecorator
{
public:

	Milk(Drink *drink) : AditionDecorator(drink) {}

	std::string getDescription()
	{
		return AditionDecorator::getDescription() + " + Milk";
	}

	double cost()
	{
		return (1.15 + AditionDecorator::cost());
	}
};