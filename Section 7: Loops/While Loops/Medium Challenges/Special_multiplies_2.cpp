#include <iostream>

using namespace std;

int main()
{
	int num,counter {0},numbers {0};
	cin >> num;

	while(counter < num)
	{
		if(numbers % 3 == 0 && numbers % 4 != 0)
		{	
			cout << numbers << " ";
			counter++;
		}

		numbers++;
	}

	cout << "\n";

	return 0;
}