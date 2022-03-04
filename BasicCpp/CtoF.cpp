#include "CtoF.h"



void CtoF::ctofStart()
{
	cout << "Convert from Celcius to Farenheit\n" << endl;
	cout << "Input temperature in Celcius :";
	cin >> degC;

	convertCtoF(degC); 
}

void CtoF::convertCtoF(float a)
{
	float degF = a * 9 / 5 + 32;

	cout << "The temperature in Fahrenheit is " << degF << "\370F" << endl;

	cout << "Would you like to try again? Y / N   ";
	cin >> repeat;


	Start start;

	if (repeat == "Y" || repeat == "y")ctofStart();
	else start.ChooseTask();
}
