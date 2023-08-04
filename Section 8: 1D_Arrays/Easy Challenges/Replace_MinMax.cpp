#include <iostream>

using namespace std;

int main()
{	
	int arr[1000];

	int num, min_num, max_num;
	cin >> num;

	cin >> arr[0];
	min_num = max_num = arr[0];

	for(int i=1; i<num; i++)
	{
		cin >> arr[i];
		if(arr[i] > max_num)
			max_num = arr[i];
		 
		else if(arr[i] < min_num)
			min_num = arr[i];
	}

	for(int i=0; i<num; i++)
	{
		if(arr[i] == max_num)
			arr[i] = min_num;

		else if(arr[i] == min_num)
			arr[i] = max_num;
	}

	for(int i=0; i<num; i++)
		cout << arr[i] << " ";

	cout << "\n";

	return 0;
}