#include <iostream>

using namespace std;

int main()
{	
	int num1,num2,remainder;
	cin >> num1 >> num2;

	remainder = num1 - ((num1/num2) *num2);

	cout << remainder << endl;

	return 0;

}