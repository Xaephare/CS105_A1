#include <iostream>
#include "shapes.h"

int shape_sel = 0; //global selection variable
enum {SQUARE=1, RECTANGLE, TRIANGLE, CIRCLE, EXIT};
void main_menu();

void area() {
	double height, width, radius = 0;
	Square s;
	Rectangle r;
	Circle c;
	Triangle t;
	switch (shape_sel) {
	case SQUARE:
		std::cout << "Please enter the base length of the square in cm: \n";
		width = s.get_data();
		s.calculate_area(width, width); //squares are equal, only one value needed
		break;
	case RECTANGLE:
		std::cout << "Please enter the height of the rectangle in cm: \n";
		height = r.get_data();
		std::cout << "Please enter the width of the rectangle in cm: \n";
		width = r.get_data();
		r.calculate_area(height, width);
		break;
	case TRIANGLE:
		std::cout << "Please enter the height of the triangle in cm: \n";
		height = t.get_data();
		std::cout << "Please enter the width of the triangle in cm: \n";
		width = t.get_data();
		t.calculate_area(height, width);
		break;
	case CIRCLE:
		std::cout << "Please enter the radius of the circle in cm: \n";
		radius = c.get_data();
		c.calculate_area(radius);
		break;
	}
}

void perimeter() {
	double height, width, radius = 0;
	Square s;
	Rectangle r;
	Circle c;
	Triangle t;
	switch (shape_sel) {
	case SQUARE:
		std::cout << "Please enter the width of the square in cm: \n";
		width = s.get_data();
		s.calculate_perimeter(width, width); //squares are equal, only one value needed
		break;
	case RECTANGLE:
		std::cout << "Please enter the height of the rectangle in cm: \n";
		height = r.get_data();
		std::cout << "Please enter the width of the rectangle in cm: \n";
		width = r.get_data();
		r.calculate_perimeter(height, width);
		break;
	case TRIANGLE:
		std::cout << "Please enter the height of the triangle in cm: \n";
		height = t.get_data();
		std::cout << "Please enter the width of the triangle in cm: \n";
		width = t.get_data();
		t.calculate_perimeter(height, width);
		break;
	case CIRCLE:
		std::cout << "Please enter the radius of the circle in cm: \n";
		radius = c.get_data();
		c.calculate_perimeter(radius);
		break;
	}
}

void title_display() {
	Square s;
	Rectangle r;
	Circle c;
	Triangle t;
	switch (shape_sel) {
	case SQUARE:
		std::cout << "*******************\n" <<
		"Square Calculator\n\n" <<
		"*******************\n\n";
		s.draw_shape();
		std::cout << std::endl;
		break;
	case RECTANGLE:
		std::cout << "*******************\n" <<
		"Rectangle Calculator\n\n" <<
		"*******************\n\n";
		r.draw_shape();
		std::cout << std::endl;
		break;
	case TRIANGLE:
		std::cout << "*******************\n" <<
		"Triangle Calculator\n\n" <<
		"*******************\n\n";
		t.draw_shape();
		std::cout << std::endl;
		break;
	case CIRCLE:
		std::cout << "*******************\n" <<
		"Circle Calculator\n\n" <<
		"*******************\n\n";
		c.draw_shape();
		std::cout << std::endl;
		break;
	}
}

void menu_2() {
	int sel;
	title_display();
	std::cout << "What would you like to calculate?\n";
	std::cout << "	1. Area\n";
	std::cout << "	2. Perimeter\n";
	std::cout << "	3. Return to main menu\n";
	std::cin >> sel;
	
	switch (sel) {
	case 1:
		area();
		break;
	case 2:
		perimeter();
		break;
	case 3:
		main_menu();
		break;
	default:
		std::cout << "Invalid selection\n";
		menu_2();
		break;
	}
}

void main_menu() {
	
	std::cout << "*******************\n" <<
		"Shapes Calculator\n\n" <<
		"*******************\n";
	std::cout << "Which shape would you like to calculate?\n";
	std::cout << "	1. Square\n";
	std::cout << "	2. Rectangle\n";
	std::cout << "	3. Triangle\n";
	std::cout << "	4. Circle\n";
	std::cout << "	5. Exit\n";
	std::cin >> shape_sel;

	if (shape_sel > 0 && shape_sel < 5) {
		menu_2();
	}
	else if (shape_sel == 5) {
	}
	else {
		std::cout << "Invalid selection.\n";
		main_menu();
	}
}


int main() {
	Square sqr;
	Rectangle rec;
	Circle cir;
	Triangle tri;

	main_menu();
	
	return 0;
}