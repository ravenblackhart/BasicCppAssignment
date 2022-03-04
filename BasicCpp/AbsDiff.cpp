#include "AbsDiff.h"


void AbsDiff::absStart() {

	cout << "Absolute Difference \n" << endl;

	cout << "Please Enter First Number :";
	cin >> first;

	cout << "Please Enter Second Number :";
	cin >> second;

	AbsoluteDiff(first, second); 

}

void AbsDiff::AbsoluteDiff(int a, int b)
{
	int diff = a - b;

	cout << a << " - " << b << " = " << diff << endl;

	if (diff < 0) diff *= -1;
	cout << "The Absolute Difference between " << a << " & " << b << " is " << diff << endl;

	cout << "Would you like to try again? Y / N   ";
	cin >> repeat;

	Start start;

	if (repeat == "Y" || repeat == "y") absStart();
	else start.ChooseTask(); 

}




