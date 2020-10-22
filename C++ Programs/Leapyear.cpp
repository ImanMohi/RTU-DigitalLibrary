#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Declaration of variable
    int year;
    
    //Taking input in variable
    cout << "Enter a year: ";
    cin >> year;
    
    
    //Checking the necessary conditions
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}
