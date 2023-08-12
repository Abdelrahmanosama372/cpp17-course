#include <iostream>

using namespace std;

int main()
{	
	unsigned int num;
	cin >> num;

	// years
	cout << num / 360 << " "; 
	num %= 360;

	// months
	cout << num / 30 << " ";
	num %= 30;

	// days
	cout << num << endl;

	return 0;

}