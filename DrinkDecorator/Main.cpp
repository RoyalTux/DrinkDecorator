#include <new>
#include <iostream>
#include "Drink.h"
#include "Tea.h"
#include "Coffee.h"
#include "Lemon.h"
#include "Shugar.h"
#include "Milk.h"

int main()
{
	Drink *coffeeDrink = new Coffee();
	std::cout << coffeeDrink->getDescription() + "  $" << coffeeDrink->cost() << std::endl;
	coffeeDrink = new Shugar(coffeeDrink);
	coffeeDrink = new Milk(coffeeDrink);
	std::cout << coffeeDrink->getDescription() + "  $" << coffeeDrink->cost() << std::endl << std::endl;

	Drink *teaDrink = new Tea();
	std::cout << teaDrink->getDescription() + "  $" << teaDrink->cost() << std::endl;
	teaDrink = new Lemon(teaDrink);
	teaDrink = new Shugar(teaDrink);
	std::cout << teaDrink->getDescription() + "  $" << teaDrink->cost() << std::endl;

	system("pause");
	return 0;
}