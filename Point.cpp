#include "Point.h"

Point::Point(double other_x, double other_y) {
	x = other_x;
	y = other_y;

}
double Point::getx() const {
	return x;
}
double Point::gety() const {
	return y;
}