//Program To Introduce Reference Variable
#include<iostream>
using namespace std;
int main ()
{
	int    a;  //value and address
   	float b;
	// declare reference variables
   	int	&x = a;  //& address of operator
   	float &y = b;
   a = 23;
   cout << "Value of a : " << a << endl;
   cout << "Value of a reference : " << x  << endl;
   cout << "Address : " << &x  << endl;
   b = 78.23;
   	cout << "Value of b : " << b << endl;
   	cout << "Value of b reference : " << y  << endl;
   	cout << "Address : Y " << &y  << endl;
   	cout << "Address : B " << &b  << endl;
   	return 0;
}

