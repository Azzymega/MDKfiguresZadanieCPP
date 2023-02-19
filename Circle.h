#pragma once
#include <iostream>
#include <typeinfo>
#include "Shape.h"

class Circle : public Shape
{
private:
	int coords[];
public:
	Circle (std::string color, int x, int y)
	{
		this->color = color;
		int coords[] = { x,y };
	}
	void draw () override
	{
		std::cout << " ***********  " << std::endl;
		std::cout << " ***********  " << std::endl;
		std::cout << " ***********  " << std::endl;
		std::cout << " ***********  " << std::endl;
		std::cout << " ***********  " << std::endl;
		std::cout << " ***********  " << std::endl;
	}
	bool equals (Shape *shape)
	{
		return (typeid(Circle) == typeid(*shape));
	}
};