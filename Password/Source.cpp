#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
bool password();
int main()
{
	// Password : programming 
	if (password())
	{
		cout << "Congratulation!";

	}
	else
	{
		cout << "Wrong password!";
	}
	
	return 0; 
}
bool password()
{
	int x;
	int m = 3;
	for (int  i = 0; i < 3; i++)
	{
		
		char array[50];
		do
		{
			cout << "You have " << m << " attempt" << " enter the password :";
			
			gets_s(array);
			strlen(array);//Numbers of digitals
			x = strlen(array);
		} while (0>x || x>=49);
		if (!strcmp(array,"programming"))
		{
			cout << "Password enter corectly," << " ";
			return true;
		}
		else
		{
			cout << "Invalid password!";
			cout << endl;
		}
		--m;
	}
	return false;
}