
#include"register.h"
#include<string>
#include<iomanip>

int main()
{
	

	_car car;
	car.add();

	car.print_all();

	std::cout << "Find car by number" << std::endl;
	std::string f;
	std::getline(std::cin, f);

	car.find(f);
	
	return 0;

}