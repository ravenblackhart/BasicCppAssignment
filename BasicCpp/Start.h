#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#include "AbsDiff.h"
#include "CtoF.h"
#include "EvenOdd.h"

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

