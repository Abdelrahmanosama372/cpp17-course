#include  <iostream>

using namespace std;

int main()
{
	int x, y, z, maxi;
	cin >> x >> y >> z;

	maxi = x;

	if( x > 100)
		maxi = -1;
	if( y < 100 && y > x)
		maxi = y;
	if(z < 100 && z > x && z > y)
		maxi = z;

	cout << maxi << endl;

	return 0;
}