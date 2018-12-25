#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
bool password();
int main()
{
	if (password())
	{

	}
	// Password : programming 
	return 0; 
}
bool password()
{
	for (int  i = 0; i < 3; i++)
	{
		int x,v=3;
		char array[50];
		do
		{
			cout << "You have " << v << " attempt" << " enter the password :";
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
	}
	return false;
}