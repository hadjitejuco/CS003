//computes for the Volume of Sphere
#include <iostream>
using namespace std;
int main()
{
	float  rad;
	const  float  PI = 3.14159;//read-only
	cout << " Enter Radius of Sphere ::: ";
	cin >> rad;
	float  vol = (4.0/3.0) * PI * rad * rad * rad;
	cout << "\n Volume of Sphere is = " << vol;
	return 0;
}

