# Data Structures
This project focuses on enhancing C++ programming skills through the development of a program that computes the mode(s) of a dataset. Key areas of focus include working with arrays, file input/output, integrating multiple source and header files, and utilizing makefiles for compilation. The primary tasks involve writing functions to read an array of integers from a file and to find the mode(s) of this array, handling cases with multiple modes. The project aims to solidify understanding of array manipulation, efficient data processing, file handling, and the overall structure and organization of a C++ program. The outcome is a functional application that can read data from provided files, calculate the mode(s), and display the results, demonstrating practical application of these fundamental programming concepts.

Already provided files to use / alter:

ModeMain.cpp (already in the repo) It defines the main() function and printModes(); make sure to look at this file to understand how your functions will be used!
Makefile (sample already in the repo, but you WILL need to edit this to match the files used here!)
Several sample input files: input_01.txt, input_02.txt, input_03.txt, input_04.txt (has test cases)
Four required files to fill out:

readfile.h (function prototype: readFiletoArray())
readfile.cpp (function implementation: readFiletoArray())
mode.h (function prototype: findModes())
mode.cpp (function implementation: findModes())
Two required functions:

void readFiletoArray(string filename, int* data); This function reads the data stored in file defined by string filename into an integer array, int data[]. You can assume that the main function initializes the data array with enough space to hold the given test data.
void findModes(int input[], int size, int& frequency, int result[], int& result_count); This function takes in the inputs, finds the mode(s) - there can be more than one mode - and stores the results inside array_result, with result_count denoting the number of modes, and frequency the frequency of the modes.
Your output with the provided test files should look like this:

Input: 2, 3, 4, 4, 3, 1, 2, 1, 2, 3 Modes: 2, 3 Frequency : 3

Input: 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 Modes: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 Frequency : 1

Input: 1, 3, 4, 9, 7, 8, 5, 0, 2, 3 Modes: 3 Frequency : 2

Input: 2, 3, 4, 4, 5, 1, 2, 1, 5, 3 Modes: 1, 2, 3, 4, 5 Frequency : 2

```
❯ ./file_reader 
Input: 1, 1, 2, 2, 2, 3, 3, 3, 4, 4
Modes: 2, 3
Frequency : 3
Input: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Modes: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Frequency : 1
Input: 0, 1, 2, 3, 3, 4, 5, 7, 8, 9
Modes: 3
Frequency : 2
Input: 1, 1, 2, 2, 3, 3, 4, 4, 5, 5
Modes: 1, 2, 3, 4, 5
Frequency : 2
```
