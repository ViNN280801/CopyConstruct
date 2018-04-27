#include "stdafx.h"
#include "Circle.h"
#include <cmath>
#include <iostream>

using namespace std;

Circle::Circle()
{
	float R = 0;
}


void Circle::setRadius(float radius)
{
	float R = 0;
	R = radius;
}


float Circle::LengthCircle(float radius)
{
	float Pi = 3.14, Length = 0;
	Length = 2 * Pi * radius;
	cout << "Длина окружности " << Length << endl;
	return Length;
}


float Circle::SquareCircle(float radius)
{
	float Pi = 3.14, Square = 0;
	Square = Pi * pow(radius, 2);
	cout << "Площадь окружности " << Square << endl;
	return Square;
}


Circle::~Circle()
{
}