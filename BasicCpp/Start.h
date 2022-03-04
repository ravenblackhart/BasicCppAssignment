#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#include "AbsDiff.h"
#include "CtoF.h"
#include "EvenOdd.h"
#include "LastDigit.h"
#include "Swap.h"
#include "Guess.h"
#include "Reverse.h"
#include "Palindrome.h"

class Start
{
private:
	string uid;
	int option = 0;

public:

	void StartApp();
	void ChooseTask(); 
	void SwitchTasks(); 
};

