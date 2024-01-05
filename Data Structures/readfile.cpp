#include "readfile.h"

void readFiletoArray(std::string filename, int* data)
{
	int i = 0;
	std::string line;
	std::ifstream file (filename);
	if (file.is_open())
	{
		while(std::getline(file, line))
		{
			data[i] = std::stoi(line);
		}
		file.close();
	}
	else
	{
		std::cout << "Can't open file" << std::endl;
	}
}