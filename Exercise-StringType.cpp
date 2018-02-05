//compare two strings
//complete the program below. 

#include <iostream>
#include <string>
using namespace std;

#include "console.h"
#include "simpio.h"

int main()
{

	string myName="Mike";

	while (true)
	{
		cout<<"Enter your name (or 'quit' to exit):";
		string userName= getLine();
		//get the user input for string.
		if(userName=="Abu")
	       	{
			cout<<"Hey Abu!"<<endl;
		}
		else if(userName=="quit")
		{
			cout<<endl;
			break;
		}
		else
		{
			cout<<"Aha! its "<<myName<<endl;
		}
	}
	return 0;
}


