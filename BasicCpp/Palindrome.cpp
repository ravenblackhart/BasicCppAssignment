#include "Palindrome.h"

void Palindrome::palindromeStart()
{
    cout << "Palindrome Check\n" << endl;
    cout << "Enter a string with more than one character :";
    cin.ignore(); 
	getline(cin, input,'\n');

    palindromeEnd(input); 
    
}


bool Palindrome::isPalindrome(string x)
{
    int size = x.length();
    char temp; 

    for(int i = 0; i < size; i++)
    {
        if (x[i] == x[size - (i + 1)] || tolower(x[i]) == x[size - (i + 1)] || toupper(x[i]) == x[size - (i + 1)]) return 1;
        else return 0; 
    }

}

void Palindrome::palindromeEnd(string x)
{
    if (isPalindrome(x)) {

        cout << x << " is a palindrome.";
    }
    else {
        cout << x << " is NOT a palindrome.";
    }

    cout << endl;
    cout << "\nWould you like to try again? Y / N   ";
    cin >> repeat;


    Start start;

    if (repeat == "Y" || repeat == "y")palindromeStart();
    else start.ChooseTask();
}
