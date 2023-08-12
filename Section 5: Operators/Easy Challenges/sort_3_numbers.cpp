#include  <iostream>

using namespace std;

int main()
{
	int x, y, z;
	cin >> x >> y >> z;

	if(x > y && x > z && y > z)
		cout << z << " " << y << " " << x << endl;

	else if(x > y && x > z && y < z)
		cout << y << " " << z << " " << x << endl;

	else if(y > x && y > z && x > z)
		cout << z << " " << x << " " << y << endl;

	else if(y > x && y > z && x < z)
		cout << x << " " << z << " " << y << endl;

	else if(z > x && z > y && y > x)
		cout << x << " " << y << " " << z << endl;

	else
		cout << y << " " << x << " " << z << endl;

	return 0;
}