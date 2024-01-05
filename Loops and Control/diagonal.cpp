#include <iostream>

using namespace std;

int main()
{
	int N;

	/*User prompt*/
	cout << "N: ";
	cin >> N;
	
	/*N range*/
	while (N > 0 && N < 10)
	{
		/*Prints number at the end*/
		for (int i = N; i > 0; i--)
		{
			/*Prints the spaces according to i*/
			for (int j = i; j > 0; j--)
			{
				cout << " ";
			}
			
			cout << i << endl;
		}

		/*Usr prompt and break while loop*/
        cout << "N: ";
        cin >> N;
	}

	/*Invalid input and termintes*/
	cout << "Invalid value for N!" << endl;

	return 0;
}
