#include <iostream>

using namespace std;

int main()
{
	int N;
	bool is_prime {true};

	cin >> N;

	if(N <= 1)
		is_prime = false;

	for(int i=2; i<N; i++)
	{
		if(N % i == 0)
		{
			is_prime = false;
			break;
		}
	}
	
	if(is_prime) cout << "Yes" << endl;
	else         cout << "No"  << endl;
	
	return 0;
}