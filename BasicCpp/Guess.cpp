#include "Guess.h"

void Guess::guessStart()
{
	cout << "Guess The Number\n" << endl;

	cout << " Give me a range of numbers to pick from, and then guess the number I picked from that range!\n" << endl;

	cout << "Enter Range Maximum :";
	cin >> max;

	cout << "Enter Range Minimum :";
	cin >> min;

	secretNum(max, min);

}

void Guess::secretNum(int a, int b)
{
	srand(time(0));
	secret = rand() % a + b;

	cout << "I picked a number. Guess the number! \n";
	cout << "Your guess :";
	cin >> input;

	while (input != secret)
	{
		cout << "That's not it! ";
		if (input < secret) cout << " The secret number is higher. ";
		else cout << "The secret number is lower. ";
		cout << "Guess again! \n";
		cout << "Your guess :";
		cin >> input;
	}

	cout << "You got it! The secret number is " << secret << " . Yay! \n";


}

void Guess::guessEnd()
{
	cout << "\nWould you like to try again? Y / N   ";
	cin >> repeat;


	Start start;

	if (repeat == "Y" || repeat == "y")guessStart();
	else start.ChooseTask();
}


