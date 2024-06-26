#include <gmpxx.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	mpz_class a;
	mpz_class b;
	a = "123";
	string g= "321";
	b = g;
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	return 0;
}
