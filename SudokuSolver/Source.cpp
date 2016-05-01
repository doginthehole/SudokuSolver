#include <iostream>
#include "Header.h"

using namespace std;

///is this the best way to make these variables accessable or should I include them in an header file?
//number of sets
const int rows(9);
//total numbers in set
const int columns = 9;
//the array
int board[::rows][::columns] = { { 0,435,234,554,134 },{},{},{},{},{},{},{} };

int main()
{
	//int board[::rows][::columns] = { {0,435,234,554,134},{},{},{},{},{},{},{} };

	cout << "hello world" << endl;
	//void arrayWorkingStuff();
	void printArray(int board[::rows][::columns]);

	return 0;
}


int arrayWorkingStuff()
{
	//setting the array
	int board[::rows][::columns] = { {},{},{},{}, {}, {}, {}, {} };
	return 0;
}

///why doesn't this work?
//function to print current array
void printArray(int board[::rows][::columns])
{
	//iterate through array
	for (int i = 0; i < rows; i++)
		for (int x = 0; x < columns; x++)
		{
			cout << board[i][x];
		}
	cout << endl;
}


