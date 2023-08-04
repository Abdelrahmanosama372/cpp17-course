#include <iostream>

using namespace std;

int main()
{
	int count {0},_sum;

	for(int a=1; a<=200; a++)
	{
		for(int b=1; b<=200; b++)
		{
			for(int c=1; c<=200; c++)
			{
				_sum = a+b-c;
				if(_sum >= 1 && _sum <=200)
					count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}