#include <iostream>

using namespace std;

int main()
{
	int num,temp1,temp2,counter {1},temp3,temp4 {0};
	cin >> num;

	temp1 = num;

	// dimond upper part
	while(temp1--)
	{
		temp2 = temp1;
		temp3 = counter;
		while(temp2--)
			cout << " ";
		while(temp3--)
			cout << "*";
		cout << "\n";
		counter += 2;
	}

	// dimond lower part
	temp1 = num;
	counter = 2*num-1;
	temp2 = 0;

	while(temp1-- && counter > 0)
	{
		temp3 = counter;
		temp2 = temp4;
		while(temp2--)
			cout << " ";
		while(temp3--)
			cout << "*";
		cout << "\n";
		counter -= 2;
		temp4++;
	}

	return 0;
}