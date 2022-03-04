#include "Swap.h"

void Swap::swapStart()
{
    cout << "Swap Numbers\n" << endl;

    cout << " Give me a 2 numbers for A & B and I will swap them!\n" << endl;

    cout << "Enter First Number (for A) :";
    cin >> first;

    cout << "Enter Second Number (for B) :";
    cin >> second;

    swapSTL(first, second); 
    swapRef(first, second);
    swapPtr(first, second);

    cout << endl;

    swapEnd(); 
    
}

void Swap::swapSTL(double a, double b)
{
    swap(a, b); 
    cout << "Using STL swap(), the value of A is now " << a << " and the value of B is now " << b << endl; 
}

void Swap::swapRef(double &a, double &b)
{
    cout << "Using references, the value of A is now " << b << " and the value of B is now " << a << endl;
}

void Swap::swapPtr(double a, double b)
{
    double* aPtr = &a;
    double* bPtr = &b;

    cout << "Using pointers, the value of A is now " << *bPtr << " and the value of B is now " << *aPtr << endl;
}

void Swap::swapEnd()
{
    cout << "\nWould you like to try again? Y / N   ";
    cin >> repeat;


    Start start;

    if (repeat == "Y" || repeat == "y")swapStart();
    else start.ChooseTask();
}

