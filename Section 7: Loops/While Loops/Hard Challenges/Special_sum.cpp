#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int test_cases, num, val, counter {1} ,s_sum {0};
	cin >> test_cases;

	while(test_cases--)
	{
		cin >> num;

		while(num--)
		{
			cin >> val;
			s_sum += pow(val,counter);
			counter++;
		}
		cout << s_sum << endl;
		s_sum = 0;
		counter = 1;
	}
	
	return 0;
}