#include "car.h"

std::string car::to_string() const
{
	std::ostringstream oss;
	oss << "owner :" << std::setw(10) << std::left << owner 
		<< "color :"<<std::setw(10) << std::left << color 
		<< "year :"<<std::setw(10) << std::left << year
		<< "number :" << std::setw(10) << std::left << number;
	return oss.str();
}

void car::from_string(const std::string& str)
{
	std::istringstream iss(str);
	iss >> owner >> color >> number >> year;
}

std::ostream& operator<<(std::ostream& out, const car& object)
{
	out << object.to_string();
	return out;
}

std::istream& operator>>(std::istream& in, car& object)
{
	std::string tmp;
	getline(in, tmp);
	object.from_string(tmp);
	return in;
}
