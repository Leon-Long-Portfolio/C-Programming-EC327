#include <iostream>

using namespace std;

int main()
{
    int start,
        stop,
        step;

    /*Prompt the user for inputs*/
    cout << "Start: ";
    cin >> start;
    cout << "Stop: ";
    cin >> stop;
    cout << "Step: ";
    cin >> step;

    /*Check for termination*/
    while (start != stop)
    {
        /*Prints based on inputs*/
        for (int i = start; i <= stop; i += step)
        {
            /*Prints  number*/
            cout << i;

            /*Prints commas and spaces, NOT printing for the last number*/
            if (i + step <= stop)
                cout << ", ";
        }

        /*Prompt the user for inputs*/
        cout << endl << "Start: ";
        cin >> start;
        cout << "Stop: ";
        cin >> stop;
        cout << "Step: ";
        cin >> step;
    }

    /*Termination*/
    cout << "Bye, bye!";

    return 0;
}