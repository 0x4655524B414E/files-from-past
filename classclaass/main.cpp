#include "circle.h"
#include <iostream>

int main()
{
	Circle c1;
	Circle *p {new Circle(3,4,7)}; 

	std::cout << p->area() << std::endl;
	std::cout << p->circumference() << std::endl;
	std::cout << p->distanceToOrigin() << std::endl;
	p->move(8,8);
	p->setRadius(-78);
	std::cout << p->getX() << std::endl;
	std::cout << p->getY() << std::endl;
	std::cout << p->getRadius() << std::endl;


	delete p;
	return 0;
}