#pragma once

const double pi = 3.14159265;

class Shapes {
private:
	double calc_result;

public:
	Shapes();
	virtual void draw_shape() = 0;
	double calculate_area(double height, double width);
	double calculate_area(double heightwidth);
	void give_result();
	double get_data();
	void set_result(double input);
};


//derived classes
class Square : public Shapes {
public:
	void draw_shape();
};
class Rectangle : public Shapes {
public:
	void draw_shape();
};
class Triangle : public Shapes {
public:
	void draw_shape();
	double calculate_area(double height, double width);
};
class Circle : public Shapes {
public:
	void draw_shape();
	double calculate_area(double diameter);
};