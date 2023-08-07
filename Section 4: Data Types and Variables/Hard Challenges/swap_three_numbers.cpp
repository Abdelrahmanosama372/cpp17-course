#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, temp {-1};
	cin >> num1 >> num2 >> num3;
	
	// swapping
	temp = num1+num2+num3;
	num3 = temp - num2 - num3;
	num2 = (temp -= num1) - num2;
	num1 = (temp -= num2);
	
	cout << num1 << " " << num2 << " " << num3 << endl;
	return 0;
}