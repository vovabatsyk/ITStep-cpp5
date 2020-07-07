#pragma once
#include"tree.h"
#include"car.h"

class _car
{
public:
	_car() = default;

	void add();
	void print_all() const;
	void find(const std::string key);

private:
	tree<std::string, car> tree_car;
	car new_car;
};


void _car::add()
{
	std::cout << "enter car(owner, color, number, year) and press \"ctrl+z\"" << std::endl;

	while (std::cin >> new_car)
	{
		tree_car.add(new_car.get_number(), new_car);
	}
	std::cin.clear(0);
	std::cin.ignore(std::cin.rdbuf()->in_avail());
}

void _car::print_all() const
{
	std::cout << tree_car << std::endl;
}

void _car::find(const std::string key) {
	if (tree_car.find(key))
	{
		std::cout << "Found :" << std::endl;
		std::cout << *tree_car.find(key) << std::endl;
	}
	else
	{
		std::cout << "Not found!" << std::endl;
	}
}
