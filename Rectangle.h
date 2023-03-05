#pragma once
#include <iostream>
#include <typeinfo>
#include "Shape.h"

class Rectangle : public Shape 
{
private:
	int coords[];
public:
	Rectangle (std::string color, int x, int y)
	{
		this->color = color;
		int coords[] = { x,y };
	}
	void draw () override
	{
		std::cout << " *********** " << std::endl;
		std::cout << " *********** " << std::endl;
		std::cout << " *********** " << std::endl;
		std::cout << " *********** " << std::endl;
		std::cout << " *********** " << std::endl;
		std::cout << " *********** " << std::endl;
	}
	bool equals (Shape *shape) 
	{
		return (typeid(Rectangle) == typeid(*shape));
	}
};