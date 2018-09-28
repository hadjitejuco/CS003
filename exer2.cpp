#include <iostream>
using namespace std;
#define   PI   3.14159
int main()
{
	float   r, vol;
	cout << "\n Enter Radius of Hemi-Sphere ::: ";
	cin >> r;
	vol = ( 2.0 / 3.0 ) * PI * r * r * r;
	cout << "\n Volume of Hemi-Sphere = " << vol;
	return 0;
}

