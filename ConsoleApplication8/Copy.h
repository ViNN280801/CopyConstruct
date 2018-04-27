#pragma once
class Copy
{
private:
	static int count;
	char *name;
public:
	Copy();
	static void countObject();
	~Copy();
};
Copy Function(Copy obj);


