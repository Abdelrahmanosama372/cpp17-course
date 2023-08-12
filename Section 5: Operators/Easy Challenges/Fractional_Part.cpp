#include <iostream>

using namespace std;

int main()
{	
	int num1, num2;
	double res;
	cin >> num1 >> num2;

	res = static_cast<double>(num1)/ num2 - num1/num2;
	cout << res << endl;

	return 0;

}