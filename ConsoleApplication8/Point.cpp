#include "stdafx.h"
#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;

Point::Point()
{
	float X = 0;
	float Y = 0;
}


// Расстояние между двумя точками

void Point::PointS(float point_x1, float point_y1)
{
	X = point_x1;
	Y = point_y1;
}

float Point::Tochka(float tochka_x2, float tochka_y2)
{
	float d = sqrt(pow((tochka_x2 - X), 2) + pow((tochka_y2 - Y), 2));
	cout << "Расстояние между точками равно " << d << endl;
	return d;
}

Point::~Point()
{
}
