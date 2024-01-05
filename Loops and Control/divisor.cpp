#include <iostream>
#include <stdbool.h>

using namespace std;

bool isPrime (int input) {
    /*Not prime*/
    if (input <= 1) {
        return false;
    }

    /*Checking for divisor*/
    for (int i = 2; i * i < input; i++) {
        if (input % i == 0) {
            return false;
        }
    }
    return true;
}

void printFactors (int input) {
    for (int i = 1; i <= input; i++)
    {
        /*Print factor*/
        if (input % i == 0) { 
            cout << i;
            if (i + 1 <= input) {
                cout << ", ";
            }
        }
        
    }
}

int main()
{
    int input;

    /*User prompt*/
    cout << "What number do you want to check? ";
    cin >> input;
    
    while (input > 0) {
        /*Prime number*/
        if (isPrime(input)) {
            printFactors(input);
            cout << endl << "This is a Prime Number!" << endl;
        }
        else {
            printFactors(input);
            cout << endl << "This is not a Prime Number!" << endl;
        }

        /*User prompt and stop infinite while loop*/
        cout << "What number do you want to check? ";
        cin >> input;
    }
    
    /*Negative number*/
    cout << "Sorry, we don't deal with negativity!";

    return 0;
}