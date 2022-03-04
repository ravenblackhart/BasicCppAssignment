#include "Reverse.h"

void Reverse::revStart()
{
	cout << "Reverse Collection\n" << endl;
	cout << "Enter a string with more than one character :";
	cin >> input;

	cout << "The number in reverse is : ";
	rev(input); 
}

void Reverse::rev(string x)
{
	int size = input.length();

	for (int i = size - 1; i >= 0; i--)
	{
		cout << input[i];
	}

	cout << endl;
	revEnd(); 
}

void Reverse::revEnd()
{
	cout << "\nWould you like to try again? Y / N   ";
	cin >> repeat;


	Start start;

	if (repeat == "Y" || repeat == "y")revStart();
	else start.ChooseTask();

}


