#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int test;
	cout << test << endl;
	string foo = "This " "is " "weird " "but " "works";
	cout << foo << endl;
	const double BAR = 3.14159265;
	cout << setprecision(9) << BAR << endl;
	cout << BAR << endl;
}

/*  
    _        _    _      _      ____    ____
   / \      | \  / |    / \       /    |
  /---\     |  \/  |   /---\     /     |---
 /     \    |      |  /     \   /___   |____  

*/