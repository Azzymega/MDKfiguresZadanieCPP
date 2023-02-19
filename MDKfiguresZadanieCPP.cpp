#include <iostream>

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

int main()
{
    Shape* shape[] = { new Rectangle("black",1,2), new Circle("red",1,2), new Rectangle("yellow",1,2), new Circle("blue",1,2)};
	for (Shape* item : shape)
	{
		item->draw();
	}
	Circle circle = Circle("black",1,2);
	std::cout << circle.equals(new Circle("black",1,2));

}

