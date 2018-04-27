#include "stdafx.h"
#include "Copy2.h"
#include <iostream>

using namespace std;

int Copy2::count = 0;

Copy2::Copy2()
{
	count++;
	cout << "Constructing" << endl;
}

void Copy2::countObject()
{
	cout << "Count object: " << count << endl;
}

Copy2::~Copy2()
{
	count--;
	cout << "Deleting" << endl;
}

Copy2 Function(Copy2 obj) {
	Copy2::countObject();

	Copy2 newObj;
	Copy2::countObject();

	return newObj;
}

