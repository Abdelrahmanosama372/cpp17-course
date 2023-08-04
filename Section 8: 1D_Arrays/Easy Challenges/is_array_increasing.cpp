#include <iostream>

using namespace std;

int main()
{	
	int num, val, prev_val;
	bool increase = true;

	cin >> num;
	cin >> prev_val;

	for(int i=1; i<num; i++)
	{
		cin >> val;

		if(prev_val > val)
		{
			increase = false;
			break;
		}
		prev_val = val;
		
	}

	if(increase)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}