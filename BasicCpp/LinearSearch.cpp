#include "LinearSearch.h"

void LinearSearch::lineSearchStart()
{
	cout << "Linear Search\n" << endl;
	cout << "Enter a collection of integers, seperated by a <,> :";
	cin.ignore();
	getline(cin, input, '\n');
	addToArray(input); 

	cout << "Enter your search term :";
	cin >> search;


	lineSearch(search);
}

void LinearSearch::lineSearch(int find)
{
	cout << find << "appears at positions : "; 
	int count = 0; 
	for (int i = 0; i < sizeof(collection); i++)
	{
		if (collection[i] == find)
		{
			count++;
			cout << i << "   ";
		}
	}
	if (count > 0)	cout << " in the collection , appearing a total of " << count << " times. \n";
	else if (count = 0) cout << "NULL . The number you are searching for does not exist in this collection. \n"; 

}

void LinearSearch::lineSearchEnd()
{
	cout << endl;
	cout << "\nWould you like to try again? Y / N   ";
	cin >> repeat;


	Start start;

	if (repeat == "Y" || repeat == "y")lineSearchStart();
	else start.ChooseTask();
}

void LinearSearch::addToArray(string in)
{
	int size = sizeof(input);
	string temp;
	int tempArrPos = 0;
	for (int i = 0; i < size; i++)
	{
		if (isdigit(in[i]))
		{
			temp[tempArrPos] = in[i];
			tempArrPos++;
		}

		else if (!isdigit(in[i]) && temp[0] != NULL )
		{
			collection[arrPos] = stoi(temp);
			temp = "";
			tempArrPos = 0;
			arrPos++;
		}
	}
}





