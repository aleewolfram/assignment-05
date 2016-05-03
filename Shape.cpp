#include "Point.h"
#include <cmath>

class Shape {

	/**
	* A function to determine whether a shape contains a given point.
	*
	* Arguments:
	* - `p`: The point we are considering.
	*
	* Returns:
	* - `true` if the given point is inside the shape, `false`
	*   otherwise.
	*/

public:
	virtual bool contains(const Point & p) const = 0;

	virtual ~Shape() = default;
};

class Rectangle : public Shape {
private:
	Point middle = Point(13, 14);
	double length = 6;
	double width = 4;


public:
	bool contains(const Point & p) const {
		if (length > (middle.getx() - (length / 2)) && length < middle.getx() + (length / 2)) {
			if (width > 12 && width < 16) {
				return true;
			}
		}
		
		else{
			p = false;
		}
	}

};

class Ellipse : public Shape {
private:
	Point left = Point(0, 1);
	Point right = Point(6, 1);
	double distance = 4;



public:
	double distanceFormula(Point & left, Point & right) {
		
		return sqrt(()*(x1 - x2) + (y1 - y2)*(y1 - 2)); /// HELP!
	}

	bool contains(const Point & p) const {
		if ( distanceFormula(0, 1, double x2, double y2))
		
	}

};

class Square : public Rectangle {
private:
	Point middle = Point(23, 6);
	double length = 5;
	double width = 5;


public:
	bool contains(const Point & p) const {

	}
};

class Circle : public Ellipse {
private:
	Point middle = Point(0, 7);
	double radius = 6;

public:
	bool contains(const Point & p) const {

	}

};