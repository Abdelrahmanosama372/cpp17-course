#include <iostream>

using namespace std;

int main()
{	
	int arr[1000];
	bool first_pair = true;
	int num, smallest_pair;
	cin >> num;

	for(int i=0; i<num; i++)
		cin >> arr[i];

	for(int i=0; i<num; i++)
	{
		for(int j=i+1; j<num; j++)
			if(first_pair || (arr[i] + arr[j] +j -i) < smallest_pair)
			{
				first_pair = false;
				smallest_pair = arr[i] + arr[j] +j -i;
			}
	}

	cout << smallest_pair << endl;

	return 0;
}