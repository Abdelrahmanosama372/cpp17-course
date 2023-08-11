#include <iostream>
using namespace std;


bool is_prime(int num);
int nth_prime(int n);

int main()
{
	int num;
	cin >> num;
	cout << nth_prime(num);
}

bool is_prime(int num)
{
	bool prime = true;
	for(int i=2; i<num; i++)
	{
		if (num % i == 0)
			prime = false;
	}
	return prime;
}

int nth_prime(int n)
{
	int numbers = 2;
	for(int i=0; i<n; i++)
	{
		while(!is_prime(numbers++));
	}
	return (numbers-1);
}

