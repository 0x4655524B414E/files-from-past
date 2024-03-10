#include "circle.h"

Circle::Circle(double x, double y, double radius) : x(x), y(y), radius(radius)
{

}
Circle::Circle(double radius) : Circle(0, 0, radius)
{

}
Circle::~Circle()
{
	std::cout << "Destructor is called." << std::endl;
}

double Circle::getX() const
{
	return this->x;
}
double Circle::getY() const
{
	return this->y;
}
double Circle::getRadius() const
{
	return this->radius;
}
void Circle::setX(double newX)
{
	this->x = newX;
}
void Circle::setY(double newY)
{
	this->y = newY;
}
void Circle::setRadius(double newRadius)
{
	if (newRadius >= 0)
	{
		this->radius = newRadius;
	}
	else
	{
		std::cout << "Error: can't set radius to negative!" << std::endl;
	}
}

double Circle::area() const
{
	return M_PI * pow(radius, 2.0);
}
double Circle::circumference() const
{
	return 2.0 * M_PI * radius;
}
void Circle::move(double x, double y)
{
	this->x = x;
	this->y = y;
}
double Circle::distanceToOrigin() const
{
	return sqrt(pow(x, 2.0) + pow(y, 2.0));
}
void Circle::scale(double rate)
{
	if (rate > 0.0)
	{
	this->radius *= rate;
	}
	else
	{
		std::cout << "Error: can't scale with negative!" << std::endl;
	}
}

