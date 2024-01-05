#include <iostream>

using namespace std;

int main()
{
	int height;

	/*User prompt*/
	cout << "How tall of a ladder do you need? ";
	cin >> height;

	/*Check for positive*/
	while (height >= 0)
	{
		/*Input is 0*/
		if (height == 0)
		{
			cout << "The height can't be zero!" << endl;
		}
		else
		{
			/*Prints ladder*/
			for (int i = 0; i < height; i++)
			{
				/*Prints even rungs*/
				if (i % 2)
				{
					cout << "####" << endl;
				}
				/*Prints odd rungs*/
				else
				{
					cout << "#  #" << endl;
				}
			}
		}
		/*User input and breaks while loop*/
		cout << "How tall of a ladder do you need? ";
		cin >> height;
	}

	/*Input < 0 and terminates*/
	cout << "Invalid height!";

	return 0;
}
