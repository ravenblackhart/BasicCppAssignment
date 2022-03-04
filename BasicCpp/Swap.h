#pragma once
#include "Start.h"
class Swap
{
private:
	double first, second;
	string repeat; 

public:
	void swapStart();
	void swapSTL(double a, double b);
	void swapRef(double &a, double &b);
	void swapPtr(double a, double b);
	void swapEnd(); 
};

