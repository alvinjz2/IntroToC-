#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <unistd.h>

using namespace std;

namespace player_board
{
    void generate_maze()
    {
        char maze[8][9];
        for (int i = 0; i < 8; i++) 
        {
            for (int j = 0; j < 9; j++)
            {
                maze[i][j] = '0';
            }
        }

        for (int i = 0; i < 8; i++) 
        {
            for (int j = 0; j < 9; j++)
            {
                cout << maze[i][j] << " ";
            }
            cout << endl;
        }
    }
}
namespace dev_board
{
    void generate_maze()
    {
        char maze[9][9];
        
    }
}

int main()
{
	int moves = 15;
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

    string command; 
    player_board::generate_maze();
    dev_board::generate_maze();
    
    cin >> command; 
    // do some 'tolower()' function on 'command' to make it lowercase 
    while (moves > 0)
    {
    	if(command == "up")
    	{
    		moves--;
    	}
    	else if( command = "down")
    	{
    		moves--;
    	}
    	else if(command = "left")
    	{
    		moves--;
    	}
    	else if(commmand = "right")
    	{
    		moves--;
    	}
    	else{
    		cout << "Type only up, down, left, or right" << endl;
    	}
    }
    

    return 0;
}










