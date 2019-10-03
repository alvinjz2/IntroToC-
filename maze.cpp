#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <unistd.h>
using namespace std;
int player_x = 8;
int player_y = 8;
char player_model = 'x';
int y,x;

// 'dev_board' is the game board for the developers (aka us), that the player WON'T be able to see. We will be using this board
//  for the game logic.
namespace dev_board
{
    
   string maze[9][9]; // Create a 9 row 9 column grid that we will use for us to work on
   bool collide_wall(int y,int x)
    {
    	if(dev_board::maze[player_y+y][player_x+x] == "1")
    	{
    		return true;
    	}
    	return false;
    }

        // Assign values to places in the 2D array
}
// 'player_board' namespace is the game board the player will see; all functions related to this will be in this namespace.
namespace player_board
{
	string maze[8][9];
    void generate_maze()
    {
         // Created a 2D array that will serve as the 8 row 9 column grid for the player to see
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
   
    void move_player(int y, int x)
    {
    	// happens ONLY if there isn't a wall/obstacle there.
    	if (not dev_board::collide_wall(y,x))
    	{
    		player_board::maze[player_y][player_x] = "";
    		player_board::maze[player_y+y][player_x+x] = "x";
    		
        for (int i = 0; i < 8; i++) 
        {
            for (int j = 0; j < 9; j++)
            {
                cout << player_board::maze[i][j] << " ";
            }
            cout << endl;
        	}
    	}
    	else
    	{
    		player_board::maze[player_y+y][player_x+x] = "1";
    		for (int i = 0; i < 8; i++) 
        	{
            for (int j = 0; j < 9; j++)
            {
                cout << player_board::maze[i][j] << " ";
            }
            cout << endl;
        	}
    	}
    	}
    }


int main()
{
	int moves = 15;
   	// Generating the 'fancy' text and starting the game
    cout << "    _        _    _      _      ____    ____" << endl;
    usleep(150000);
    cout << "   / \\      | \\  / |    / \\       /    |" << endl;
    usleep(150000);
    cout << "  /---\\     |  \\/  |   /---\\     /     |---" << endl;
    usleep(150000);
    cout << " /     \\    |      |  /     \\   /___   |____ " << endl << endl;
    usleep(150000);
    // User needs to press enter to start the rest of the program
    cout << "Press Enter to Begin...";
    
    cin.ignore();
    usleep(100000);
    cout << endl;
    // Initialize a variable 'command' that will take in a user input such as 'w','a','s','d' to move
    string command; 
    // Call the function 'generate_maze()' in the player_board and dev_board respectively.
    player_board::generate_maze();
   
    while(moves > 0)
    {
    	cin >> command;
    	if(command == "w")
    	{
    		y = -1;
    		x = 0;
    		player_board::move_player(y,x);
    		// do move forwards
    		// reset command to be nothing?
    		moves--; 
    	}
    	else if(command == "a")
    	{
    		y = 0;
    		x = -1;
    		player_board::move_player(y,x);
    		// do move forwards
    		// reset command to be nothing?
    		moves--; 
    	}
    	else if(command == "s")
    	{
    		y = 1;
    		x = 0;
    		player_board::move_player(y,x);
    		// do move forwards
    		// reset command to be nothing?
    		moves--; 
    	}
    	else if(command == "d")
    	{
    		y = 0;
    		x = 1;
    		player_board::move_player(y,x);
    		// do move forwards
    		// reset command to be nothing?
    		moves--; 
    	}

    }
    return 0;
}










