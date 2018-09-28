// Program to explain Operator Precedence.
#include <iostream>
using namespace std;
int  main()
{
	float result;
	result = 1.0 + 2.0 * 3.0 / 4.0;
	cout << '\n' << result;
	result = 1.0 / 2.0 + 3.0;
	cout << '\n' << result;
	result = (1.0 + 2.0) / 3.0;
	cout << '\n' << result;
	result = (1.0 + 2.0 / 3.0) + 4.0;
	cout << '\n' << result;
	return 0;
}

