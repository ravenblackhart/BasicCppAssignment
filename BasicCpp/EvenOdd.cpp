#include "EvenOdd.h"

void EvenOdd::evenoddStart()
{
	cout << "Odd or Even\n" << endl;

	cout << "Enter an integer :";
	cin >> input;

	evenoddCompare(input); 
}


void EvenOdd::evenoddCompare(int a)
{
	if (input % 2 == 0) cout << a << " is an even number.\n";
	else  cout << a << " is an odd number.\n";


	Start start;

	if (repeat == "Y" || repeat == "y") evenoddStart();
	else start.ChooseTask();
}
