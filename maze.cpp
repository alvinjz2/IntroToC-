#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
#include <unistd.h>

using namespace std;

int main()
{
	int counter = 0; //keeps track of deaths
	cout << "    _        _    _      _      ____    ____" << endl;
	usleep(150000);
	cout << "   / \\      | \\  / |    / \\       /    |" << endl;
	usleep(150000);
	cout << "  /---\\     |  \\/  |   /---\\     /     |---" << endl;
	usleep(150000);
	cout << " /     \\    |      |  /     \\   /___   |____ " << endl << endl;
	usleep(150000);
	cout << "Press Enter to Begin...";
	cin.ignore();
	usleep(100000);
	cout << endl;
	return 0;

	char maze[9][9];
	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j < 9; j++)
		{
			maze[i][j] = '0';
		}
	}
	cout << sizeof(maze) << endl;

	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j < 9; j++)
		{
			cout << maze[i][j];
		}
		cout << endl;
	}
}










