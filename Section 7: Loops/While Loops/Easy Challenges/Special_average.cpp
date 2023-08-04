#include <iostream>

using namespace std;

int main()
{
	int num, val, avg_val, counter {1};
	float sum_odd_pos {0}, sum_even_pos {0};

	cin >> num;
	avg_val = num;

	while(num--)
	{
		cin >> val;
		if(counter % 2 == 0)
			sum_even_pos += val;
		else
			sum_odd_pos += val;
		counter++;
	}

	cout << sum_odd_pos/((avg_val+1)/2) << " " << sum_even_pos/(avg_val/2) << endl;
	

	return 0;
}