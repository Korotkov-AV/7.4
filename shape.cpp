#define _USE_MATH_DEFINES
#include"shape.h"
#include<cmath>

double Shape::square() {
	return 0;
}

double Shape::volume() {
	return 0;
}

Line::Line(int _x1, int _y1, int _x2, int _y2) {
	x1 = _x1; y1 = _y1;
	x2 = _x2; y2 = _y2;
}

Sqr::Sqr(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4) : Line(_x1, _y1, _x2, _y2) {
	x3 = _x3; y3 = _y3;
	x4 = _x4; y4 = _y4;
}

double Sqr::square() {
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	return a * b;
}

Cube::Cube(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8)
	:Sqr(_x1, _y1, _x2, _y2, _x3, _y3, _x4, _y4) {
	z1 = _z1;
	z2 = _z2;
	z3 = _z3;
	z4 = _z4;
	x5 = _x5; y5 = _y5; z5 = _z5;
	x6 = _x6; y6 = _y6; z6 = _z6;
	x7 = _x7; y7 = _y7; z7 = _z7;
	x8 = _x8; y8 = _y8; z8 = _z8;
}

double Cube::square() {
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	int c = abs(z1 - z2);
	return 2 * a * b + 2 * a * c + 2 * b * c;
}

double Cube::volume() {
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	int c = abs(z1 - z2);
	return a * b * c;
}

Circle::Circle(int _x1, int _y1, double R) {
	x1 = _x1; y1 = _y1;
	radius = R;
}

double Circle::square() {
	return M_PI * radius * radius;
}

Cylinder::Cylinder(int _x1, int _y1, double R, double H) : Circle(_x1, _y1, R) {
	height = H;
}

double Cylinder::square() {
	return M_PI * radius * radius + 2 * radius * height;
}

double Cylinder::volume() {
	return M_PI * radius * radius * height;
}

