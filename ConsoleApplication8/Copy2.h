#pragma once
class Copy2
{
private:
	static int count;
	char *name;
public:
	Copy2();
	static void countObject();
	~Copy2();
};
Copy2 Function(Copy2 obj);


