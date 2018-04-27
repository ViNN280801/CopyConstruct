#include "stdafx.h"
#include "Copy.h"
#include <iostream>
using namespace std;

int Copy::count = 0;

Copy::Copy()
{
	count++;
	cout << "Constructing" << endl;
}

void Copy::countObject()
{
	cout << "Count object: " << count << endl;
}

Copy::~Copy()
{
	count--;
	cout << "Deleting" << endl;
}

Copy Function(Copy obj) {
	Copy::countObject();

	Copy newObj;
	Copy::countObject();

	return newObj;
}

