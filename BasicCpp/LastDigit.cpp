#include "LastDigit.h"

void LastDigit::printStart()
{
    cout << "Printing Numbers\n" << endl;
    cout << "Enter a number with more than one digit :";
    cin >> number;

    input = to_string(number);

    printResult(input); 
}

void LastDigit::printResult(string input)
{
    cout << "The first digit is " << input[0] << " & the last digit is " << input[input.length() - 1] << endl;
    cout << "There are " << input.length() << " digits in " << number << endl;

    cout << "The digits making up this number are : ";
    printNum(input);

    cout << "The number in reverse is : ";
    printReverse(input);

    cout << "\nWould you like to try again? Y / N   ";
    cin >> repeat;


    Start start;

    if (repeat == "Y" || repeat == "y")printStart();
    else start.ChooseTask();
}


void LastDigit::printNum(string input)
{
    int size = input.length();

    for (int i = 0; i < size; i++)
    {
        cout << input[i];

        if (i != size - 1) cout << " , ";
    }

    cout << endl;
}

void LastDigit::printReverse(string input)
{
    int size = input.length();

    for (int i = size - 1; i >= 0; i--)
    {
        cout << input[i];
    }

    cout << endl;
}

