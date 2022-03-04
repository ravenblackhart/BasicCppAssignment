#include "Occurence.h"

void Occurence::occStart()
{
	cout << "Occureneces\n" << endl;
	cout << "Enter a string with more than one character :";
	cin.ignore();
	getline(cin, input, '\n');

	occCount(input);
}

void Occurence::occCount(string x)
{
	for (int i = 0; i < x.length(); i++ )
	{
		count = 0;
		char temp = x[i];

		for (int j = 0; j < x.length(); j++)
		{
			if (x[j] == temp || x[j] == toupper(temp) || x[j] == tolower(temp))
			{
				count++;
			}

			x.erase(remove(x.begin(), x.end(), temp ), x.end());
			x.erase(remove(x.begin(), x.end(), toupper(temp)), x.end());
			x.erase(remove(x.begin(), x.end(), tolower(temp)), x.end());

			cout << input; 

			cout << temp << " appears " << count << " times " << endl;
			
		}

		

	}

	occEnd(); 
}

void Occurence::occEnd()
{
	cout << endl;
	cout << "\nWould you like to try again? Y / N   ";
	cin >> repeat;


	Start start;

	if (repeat == "Y" || repeat == "y")occStart();
	else start.ChooseTask();
}


