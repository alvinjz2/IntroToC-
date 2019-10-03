#include <iostream>
#include <stdio.h>

using namespace std;


void part_a(string input)
{
	for(int i = 0; i <= input.length(); i++)
	{
		if (isupper(input[i]))
		{
			cout << input[i];
		}
	}
}

void part_b(string input)
{
	for(int i = 0; i < input.length(); i+=2)
	{
		cout << input[i] << "";
	}
}

void part_c(string input)
{
	string out = "";
	for(int i = 0; i < input.length(); i++)
	{
        input = transform(input.begin(), input.end(), input.begin(), ::tolower(input));
		cout << input;
	}
}
int main()
{
	string input;
	cin >> input;
	part_a(input);
	part_b(input);
    part_c(input);
	return 0;
}