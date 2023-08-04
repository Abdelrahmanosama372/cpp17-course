#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int N,temp {0};
	cin >> N;

	for(int i=0; i<N; i++)
	{
		for(int j= N/2; j > abs(N/2-i); j--)
		{
			cout << " ";
		}

		cout << "*";

		if(i == N/2)
		{
			cout<< "\n";
			temp = -2;
			continue;
		}

		for(int j=0; j < abs((N-2)-i*2-temp); j++)
		{
			cout << " ";
		}

		cout<< "*"<<endl;
	}

	return 0;
}