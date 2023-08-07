#include <iostream>

using namespace std;

int main()
{
	int sum_even {0}, sum_odd {0};
	int num;

	for(int i=1; i<=8; i++)
	{
		cin >> num;
		if(i%2 == 0)
			sum_even += num;
		else
			sum_odd += num;
	}

	cout << sum_even << " " << sum_odd << endl;
	return 0;
}