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

int main()
{
	//Point p1; // no argument constructor -> Point(0,0)
	//Point p2(42); // Point(int) -> Point(42,0)
	//Point p3(1,2);	// Point(int,int) -> Point(1,2)
	//Point p5(100);
	//Point p6{100};

	Point points[5] {{1},{2},{3,4},{5},{6,7}};
	for (auto &i : points) // we should use pass by reference to not use extra memory
	{ // if we don't copy constructor is called
		i.print();
	}

	Point p1{1,2};
	Point p2{p1}; // we trigger copy constructor
	Point p3(p1); // we trigger copy constructor
	Point p4 = p1; // we trigger copy constructor
	
	return 0;
}