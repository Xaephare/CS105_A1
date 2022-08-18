#include <iostream>
#include <cmath>
#include "shapes.h"

Shapes::Shapes() {
	calc_result = height = width = radius = 0;
}


double Shapes::calculate_area(double radius) { //single argument for circle, this would be in the circle sub-class but i must show off overloading.
	double result = 0;
	result = pi * (radius * radius);
	set_result(result);
	return result;
}

double Shapes::calculate_area(double height, double width) { //overloaded function for rectangles and squares
	double result = 0;
	result = height * width;
	set_result(result);
	return result;
}

double Shapes::calculate_perimeter(double height, double width) {
	double result = 0;
	result = height * 2 + width * 2;
	set_result(result);
	return result;
}

void Shapes::set_result(double input) {
	calc_result = input;
}

double Shapes::get_data() {
	double input = 0;
	std::cin >> input;
	return input;
}

void Shapes::give_result() {
	std::cout << calc_result;
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

double Triangle::calculate_perimeter(double height, double width) {
	double result, hypot = 0;
	hypot = (height * height) + (width * width);
	hypot = sqrt(hypot);
	result = height + width + hypot;
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

double Circle::calculate_perimeter(double radius) {
	double result = 0;
	result = 2 * pi * radius;
	set_result(result);
	return result;
}