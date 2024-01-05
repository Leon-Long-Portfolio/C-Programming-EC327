#include "mode.h"

void findModes(int input[], int size, int& frequency, int result[], int& result_count)
{
    int temp, number, MaxFrequency;
    std::vector<int> vector (10,0);   

    for(int i = 0; i < size; i++)
	{		
		for(int j = i + 1; j < size; j++)
		{
			if(input[i] > input[j])
			{
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}

    number = input[0];
    frequency = 1;
    MaxFrequency = frequency;

    for (int i = 1; i < size; i++ )
   {
      if (input[i] == number)
      {
         frequency++;
         if (frequency > MaxFrequency)
         {
            std::fill_n(vector.begin(), vector.size(), 0);
            vector.push_back(number);
            MaxFrequency = frequency;
         }
         else if ( frequency == MaxFrequency )
         {
            vector.push_back(number);
         }
      }
      else
      {
         number = input[i];
         frequency = 1;
         if (frequency == MaxFrequency ) vector.push_back(number);
      }
   }
}