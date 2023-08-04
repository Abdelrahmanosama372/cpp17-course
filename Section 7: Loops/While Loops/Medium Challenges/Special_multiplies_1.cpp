#include <iostream>

using namespace std;

int main()
{
	int num,counter {0};
	cin >> num;

	while(counter <= num)
	{
		if(counter % 8 == 0 || (counter % 3 == 0 && counter % 4 == 0))
			cout << counter << " ";

		counter++;
	}

	cout << "\n";

	return 0;
}