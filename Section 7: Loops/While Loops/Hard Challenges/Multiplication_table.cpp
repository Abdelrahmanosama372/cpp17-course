#include <iostream>


using namespace std;

int main()
{
	int num1, num2, temp1 {1}, temp2 {1};
	cin >> num1 >> num2;

	while(temp1 <= num1)
	{
		while(temp2 <= num2)
		{
			cout << temp1 << " x " << temp2 << " = " << temp1 *temp2 << endl;
			temp2++;
		}

		temp2 = 1;
		temp1++;
	}
	
	return 0;
}