#pragma once
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

class Circle
{
private:
	double x, y, radius;

public:
	Circle(double x, double y, double radius);
	Circle(double radius=1);
	~Circle();

	double getX() const;
	double getY() const;
	double getRadius() const;
	void setX(double newX);
	void setY(double newY);
	void setRadius(double newRadius);

	double area() const;
	double circumference() const;
	void move(double x, double y);
	double distanceToOrigin() const;
	void scale(double rate);



};
