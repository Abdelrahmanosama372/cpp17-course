#include <iostream>

using namespace std;

int main()
{
	int count {0};

	for(int i =50; i<=300; i++)
	{
		for(int j=70; j<=400; j++)
		{
			if(i < j && ((i+j) % 7 == 0))
				count++;
		}
	}

	cout << count << endl;

	return 0;
}