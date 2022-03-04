#pragma once
#include "Start.h"
class LinearSearch
{
private:

	string input;
	int search; 
	string repeat;

	int collection[255]; 
	int arrPos = 0; 


public:
	void lineSearchStart();
	void lineSearch(int find);
	void lineSearchEnd();
	void addToArray(string in); 
}; 

