class Point {
private:
	double x = 0;
	double y = 0;

public:
	Point(double other_x = 0, double other_y = 0);

	double getx() const;
	double gety() const;
};

