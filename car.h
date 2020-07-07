#pragma once
#include<string>
#include<iostream>
#include<sstream>
#include<iomanip>
class car
{

	std::string owner, color, number;
	int year = 0;

public:
	car() = default;
	car(const std::string& owner, const std::string& color, std::string& number, int year)
		: owner(owner), color(color), number(number), year(year)
	{}

	std::string to_string() const;
	void from_string(const std::string& str);

	std::string get_number() { return number; }

	friend std::ostream& operator<<(std::ostream& out, const car& object);
	friend std::istream& operator>>(std::istream& in, car& object);
};

