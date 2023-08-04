#include <iostream>

using namespace std;

int main()
{	
	int num, prev_val, val;
	bool first_print = true;

	cin >> num;
	cin >> prev_val;

	for(int i=1; i<num; i++)
	{
		cin >> val;
		if(val != prev_val || first_print)
		{
			first_print = false;
			cout << val << " ";
		}
		prev_val = val;
	}

	cout << "\n";

	return 0;
}