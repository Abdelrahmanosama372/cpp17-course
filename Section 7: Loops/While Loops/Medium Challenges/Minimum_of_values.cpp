#include <iostream>

using namespace std;

int main()
{
	int test_cases, num, val, mini;
	bool first_val = true;

	cin >> test_cases;

	while(test_cases--)
	{
		cin >> num;

		while(num--)
		{
			cin >> val;
			if(val < mini || first_val)
			{
				mini = val;
				first_val = false;
			}	

		}
		cout << mini << endl;
		first_val = true;
	}

	return 0;
}