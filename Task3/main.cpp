#include <iostream>
#include "shapes.h"




int main() {
	Square sqr;
	Rectangle rec;
	Circle cir;
	Triangle tri;

	sqr.draw_shape();
	rec.draw_shape();
	tri.draw_shape();
	cir.draw_shape();

	sqr.calculate_area(3);
	sqr.give_result();

	rec.calculate_area(2, 5);
	rec.give_result();

	tri.calculate_area(2, 5);
	tri.give_result();

	cir.calculate_area(3);
	cir.give_result();

	return 0;
}