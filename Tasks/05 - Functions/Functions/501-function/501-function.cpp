#include <iostream>
using namespace std;

void displayBanner(int L)
{
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

int main()
{
	const string message = "Welcome to Computer Science 1000";
	
	//Get the length of the string
	int L = message.length();

	//Write the banner above
	displayBanner(L);

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;

	//Tell the calling shell all is well
	return 0;

	
}


