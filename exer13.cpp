// Program to use Prefix and
// Postfix Increment ( ++ ) Operators.  a++  = a = a+1
#include <iostream>
using namespace std;
int main()
{
	int a = 10, b = 20 ,c;
 	c = (++a) + (++b);
	// c = (a++) + (b++);
     
	cout << " value of a = " << a << endl;
	cout << " value of b = " << b << endl;
	cout << " Value of c = " << c << endl;
 
	return 0;
}

