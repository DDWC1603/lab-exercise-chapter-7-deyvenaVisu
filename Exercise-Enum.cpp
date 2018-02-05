
//if the day is sunday, what day is it?
//write your code using enum and Sunday is your default 'day'


#include<iostream.h>
using namespace std;

enum days {sun,mon,tue,wed,thur,fri,sat};

void main ()
{
	days today;
	
	for (today= sun; today<= sat; today++)
	cout<<"\n today is "<< today;
}
