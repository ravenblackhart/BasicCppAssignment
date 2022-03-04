#pragma once
#include "Start.h"
class Guess
{
private:
	int max;
	int min;
	int secret;
	int input;

	string repeat;

public:
	void guessStart();
	void secretNum(int a, int b);
	void guessEnd(); 
};

