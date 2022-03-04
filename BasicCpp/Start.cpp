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
		" 5 - Swap \n" <<
		" 6 - Guessing Game \n" <<
		" 7 - Arithmetic Progression \n" <<
		" 8 - Reverse Collection \n" <<
		"9 - Linear Search \n" <<
		"10 - Palindrome \n" <<
		"11 - nth Bit of a Number \n" <<
		"12 - Swap Bitwise \n" <<
		"13 - Min Max Sum Average \n" <<
		"14 - Constructor Order in Inheritance \n" <<
		"15 - Occurences of Characters in a String \n" <<
		"16 - Fibonacci Numbers \n" <<
		"17 - Lucky Number \n" <<
		"18 - Linear Search Word \n" <<
		"19 - Swap (intermediate) \n" <<
		"20 - Contains Number \n" <<
		"21 - Permutations \n" <<
		"22 - Compress String \n" <<
		"23 - Find Largest Number \n" <<
		"24 - Swap with Templates \n" <<
		"25 - Custom Vector Class \n" <<

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
	LastDigit lastDigit;
	Palindrome palindrome;
	Guess guess;
	Swap numSwap; 


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

	case 4:
		lastDigit.printStart(); 
		break;

	case 5:
		numSwap.swapStart();
		break;

	case 6:
		guess.guessStart();
		break;

	case 10:
		palindrome.palindromeStart();
		break;

	default:
		cout << "I'm sorry, that task is not available due to reasons..." << endl;
		ChooseTask();
	}
}
