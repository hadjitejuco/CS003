// Program to use Explicit Conversion
// or Type Casting.
#include <iostream>
using namespace std;
int main()
{
	int intv = 20000;

	intv = ( long(intv) * 50 ) ;

	cout << " intv ::: " << intv << endl;

	return 0;
}

