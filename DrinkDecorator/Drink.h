#pragma once
#include <string>

class Drink
{
public:
	Drink() {
		description = "Some drink";
	}

	virtual std::string getDescription() {
		return description;
	}

	virtual double cost() = 0;

protected:
	std::string description;
};