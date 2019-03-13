#pragma once
#include "AditionDecorator.h"

class Lemon : public AditionDecorator
{
public:

	Lemon(Drink *drink) : AditionDecorator(drink) {}

	std::string getDescription()
	{
		return AditionDecorator::getDescription() + " + Lemon";
	}

	double cost()
	{
		return (0.15 + AditionDecorator::cost());	
	}													
};