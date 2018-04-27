// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <clocale>
#include "Point.h"
#include <iostream>
#include "Circle.h"
#include "Copy.h"
#include "Copy2.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x1, y1, x2, y2;
	Point point;
	//В функции main()
	//	2.1 Введите с консоли координату по оси X первой точки.
	//	2.2 Введите с консоли координату по оси Y первой точки.
	//	2.3 Введите с консоли координату по оси X второй точки.
	//	2.4 Введите с консоли координату по оси Y второй точки.
	//	2.5 Создайте объект класса Point.
	//	2.5 Рассчитайте расстояние между точками.
	//	2.6 Выведите в консоль вычисленное расстояние.

	cout << "Введите x1: ";
	cin >> x1;
	cout << "Введите y1: ";
	cin >> y1;
	cout << "Введите x2: ";
	cin >> x2;
	cout << "Введите y2: ";
	cin >> y2;
	system("cls");
	printf("--- --- Point --- --- \n\n\n");

	point.PointS(x1, x2);
	point.Tochka(x2, y2);

	if (true) {
		Copy first;
		Copy::countObject();

		cout << "--- In function ---" << endl;
		Copy second = Function(first);
		cout << "--- Out function ---" << endl;

		Copy::countObject();
	}
	Copy::countObject();

	//В функции main()
	float radius = 0;
	//	2.1 Создайте объект класса Circle.
	Circle circle;
	//	2.2 Введите с консоли значение радиуса окружности.
	cout << "Введите радиус окружности: ";
	cin >> radius;
	system("cls");

	printf("--- --- Circle --- --- \n\n\n");


	//	2.3 Установите радиус круга.
	circle.setRadius(radius);
	//	2.4 Рассчитайте и выведете длину окружности.
	circle.LengthCircle(radius);
	//	2.5 Рассчитайте и выведете площадь окружности.
	circle.SquareCircle(radius);

	if (true) {
		Copy2 first;
		Copy2::countObject();

		cout << "--- In function ---" << endl;
		Copy2 second = Function(first);
		cout << "--- Out function ---" << endl;

		Copy2::countObject();
	}
	Copy2::countObject();


	return 0;
}

