#pragma once
#include <iostream>
#include <typeinfo>

class Shape
{
public:
	virtual void draw() = NULL;
	virtual bool equals(Shape *shape) = NULL;
	std::string color;
};