#include <iostream>

using namespace std;

int main()
{
	int N, A, B, temp;
	int sum_range {0}, digits_sum {0};

	cin >> N >> A >> B;

	for(int i=1; i <= N; i++)
	{
		temp = i;
		while(temp)
		{
			digits_sum += temp%10;
			temp /= 10;
		}

		if(digits_sum >= A && digits_sum <= B)
			sum_range += i;
		digits_sum = 0;
	}

	cout << sum_range << endl;

	return 0;
}