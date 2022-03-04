#pragma once
#include "Start.h"
class LastDigit
{
private:
	long long int number;
	string input = to_string(number);
	string repeat; 

public:
	void printStart();
	void printResult(string input);
	void printNum(string input);
	void printReverse(string input); 

};

