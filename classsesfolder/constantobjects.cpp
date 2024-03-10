#include <iostream>

class Point {
	private:
		int x,y;
	
	public:
		Point(int x, int y=0) : x(x), y(y)
		{

		}
		Point(Point &other) //: x(other.x), y(other.y) //we can do this too
		{ // copy constructor
			std::cout << "Copy Constructor is executed" << std::endl;
			this->x = other.x;
			this->y = other.y;
		}
		~Point()
		{
			std::cout << "Destructor is executed!" << std::endl;
		}
		void move(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		void print() const
		{
			std::cout << "Point [ x: " << x << ", y: " << y << " ]" << std::endl;
		}

};

class A
{
private:
	const int i {42};
	const int j;
public:
	A(int m) : j(m) // we should use this syntax to initialize const j
	{
		//this->j = m; // we cant use this syntax to initialize to a const
	}
};

class B
{	//Class B has
	// (1) no-argument/default constructor
	// (2) default Copy constructor
	// Default Destructor
	// assignment operator
};

int main()
{
	const Point p1 {1,2};
	p1.print(); // print method is allowed because print is a const method!
	// Error: you are not allowed to mutate const objects -> p1.move(3,4); // object state is mutated

	return 0;
}