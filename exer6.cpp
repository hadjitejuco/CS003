// Program to calculate Area of Triangle by
// using Math library function sqrt().
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   	float  s, a, b, c, ar;
   	cout << " Enter the value a, b & c : ";
   	cin >> a >> b >> c;
   	s = (a+b+c) / 2;
   	ar = sqrt( s * (s-a) * (s-b) * (s-c) );
   	cout << " Area of Triangle is = " << ar;
   	return 0;
}

