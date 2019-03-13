#pragma once
#include "AditionDecorator.h"

class Shugar : public AditionDecorator
{
public:

	Shugar(Drink *drink) : AditionDecorator(drink) {}

	std::string getDescription()
	{
		return AditionDecorator::getDescription() + " + Shugar";
	}

	double cost()
	{
		return (0.25 + AditionDecorator::cost());
	}
};