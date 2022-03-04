#include "Start.h"

void Start::StartApp()
{
	cout << "Hello Stranger!\nPray tell, how should I address you? ";
	cin >> uid;

	cout << "\nHello " << uid << " ! \n";

	ChooseTask(); 
}

void Start::ChooseTask()
{
	cout << "\n What would you like to do today? \n" <<
		" 1 - Absolute Difference \n" <<
		" 2 - Convert Celcius to Fahrenheit \n" <<
		" 3 - Even or Odd \n" <<
		" 4 - Last Digit\n" <<
		" 6 - Swap \n" <<
		" 7 - Guessing Game \n" <<
		" 8 - Arithmetic Progression \n" <<
		" 9 - Reverse Collection \n" <<
		"10 - Linear Search \n" <<
		"11 - Palindrome \n" <<
		"12 - nth Bit of a Number \n" <<
		"13 - Swap Bitwise \n" <<
		"14 - Min Max Sum Average \n" <<
		"15 - Constructor Order in Inheritance \n" <<
		"16 - Occurences of Characters in a String \n" <<
		"17 - Fibonacci Numbers \n" <<
		"18 - Lucky Number \n" <<
		"19 - Linear Search Word \n" <<
		"20 - Swap (intermediate) \n" <<
		"21 - Contains Number \n" <<
		"22 - Permutations \n" <<
		"23 - Compress String \n" <<
		"24 - Find Largest Number \n" <<
		"25 - Swap with Templates \n" <<
		"26 - Custom Vector Class \n" <<

		"\nEnter the number corresponding to your selection : ";

	cin >> option;

	SwitchTasks();
}

void Start::SwitchTasks()
{
	cout << "\n Loading Task... \n" << endl;

	AbsDiff absDiff;
	CtoF ctof;
	EvenOdd evenodd; 


	switch(option)
	{
	case 1:
		absDiff.absStart(); 
		break;

	case 2:
		ctof.ctofStart();
		break;

	case 3:
		evenodd.evenoddStart();
		break; 

	default:
		cout << "I'm sorry, that task is not available due to reasons..." << endl;
		ChooseTask();
	}
}
