#include <iostream>

using namespace std;

int main()
{
	int num1;
	cin >> num1;
	num1 % 2 == 0? cout << (1+num1)*(num1/2) : cout << (1+num1)*(num1/2) + num1/2 +1;


	return 0;
}