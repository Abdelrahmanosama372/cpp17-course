#include <iostream>

using namespace std;

int main()
{
	int count {0};

	for(int a=1; a<=200; a++)
	{
		for(int b=1; b<=200; b++)
		{
			for(int c=1; c<=200; c++)
			{
				for(int d=1; d<=200; d++)
				{
					if(a+b == c+d)
						count++;
				}
			}
		}
	}

	cout << count << endl;

	return 0;
}