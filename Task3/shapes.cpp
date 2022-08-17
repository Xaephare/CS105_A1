#include <iostream>
#include "shapes.h"

Shapes::Shapes() {
	calc_result = 0;
}


double Shapes::calculate_area(double heightwidth) {
	double result = 0;
	result = heightwidth * heightwidth;
	set_result(result);
	return result;
}

double Shapes::calculate_area(double height, double width) { //overloaded function for rectangles
	double result = 0;
	result = height * width;
	set_result(result);
	return result;
}

void Shapes::set_result(double input) {
	calc_result = input;
}

double Shapes::get_data() {
	return calc_result;
}

void Shapes::give_result() {
	std::cout << "The area of the shape is: " << get_data() << "cm\xFD"/*^2 symbol*/ << " (centimeters squared)" << std::endl;
}


//derived class function overriding
void Square::draw_shape() {
	for (int i = 0; i < 5; i++) { //rows

		for (int j = 0; j < 5; j++) { //columns
			std::cout << " *";
		}
		std::cout << std::endl;
	}
}

void Rectangle::draw_shape() {
	for (int i = 0; i < 5; i++) { //rows

		for (int j = 0; j < 10; j++) { //columns
			std::cout << " *";
		}
		std::cout << std::endl;
	}
}

void Triangle::draw_shape() {
	int shape_w = 1;
	for (int i = 0; i < 5; i++) { //rows

		for (int j = 0; j < shape_w; j++) { //columns
			std::cout << " *";

		}
		shape_w++; //pretty much just draws a square cut in half diagonally
		std::cout << std::endl;
	}
}
double Triangle::calculate_area(double height, double width) {
	double result = 0;
	result = (height * width) / 2; //right angle triangle
	set_result(result);
	return result;
}

void Circle::draw_shape() {
	std::cout <<
		"     * * *\n" <<
		"   * * * * *\n" <<
		" * * * * * * *\n" <<
		" * * * * * * * \n" <<
		"   * * * * *\n" <<
		"     * * *\n";
}

double Circle::calculate_area(double radius) {
	double result = 0;
	result = pi * (radius * radius);
	set_result(result);
	return result;
}