#include <iostream>

using namespace std;

int main()
{
	int N;
	bool is_prime {true}, first_output {true};

	cin >> N;

	for(int i=2; i < N; i++)
	{
		for(int j=2; j<i; j++)
		{
			if(i % j == 0)
				is_prime = false;
		}

		if(is_prime) 
		{
			if(first_output)
			{
				first_output = false;
				cout << i ;
			}
			else
				cout << "," << i;
		}

		is_prime = true;
	}	
	
	cout << "\n";
	
	return 0;
}