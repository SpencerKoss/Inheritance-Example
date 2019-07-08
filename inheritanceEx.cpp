

#include "pch.h"
#include <iostream>
using namespace std;

//Base Class
class Shape {
public: 
	void setWidth(int w) {
		width = w;
	}

	void setHeight(int h) {
		height = h;
	}

protected:
	int height;
	int width;
};

//Base Class
class PaintCost {
public:
	int getCost(int area) {
		return area * 70;
	}
};


//Dervied Class
class Rectangle : public Shape, public PaintCost {
public:

	int getArea() {
		return (width * height);
	}
};

int main()
{
	Rectangle Rect;
	int area;
	Rect.setHeight(5);
	Rect.setWidth(6);

	area = Rect.getArea();

	cout << "The Area of the Rectangle is: " << Rect.getArea() << "ft." << endl;
	cout << "The cost to paint the Area is: $" << Rect.getCost(area) << endl;

}


