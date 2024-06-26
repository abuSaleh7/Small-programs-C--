/*
3) Write a code that return true if the user write a character, and false if write an integer.
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	
	char i[] = {'1','2','3','4','5','6','7','8','9','0'};
	char s[] = {'a','b'};
	char a;
	cout << "Enter A One Character Or Integer And It Will Be Recognized :  ";
	cin >> a;
	for ( int z = 0; z <= sizeof(i) ; z++ )
	{
		if ( a == i[z] )
		{
		cout << "You Entered The Number🤓.";
		break;
		}
	}
	for ( int z = 0; z <= sizeof(s) ; z++ )
	{
		if ( a == s[z] )
		{
		cout << "You Entered The Char 🤓.";
		break;
		}
	}
	
	
}