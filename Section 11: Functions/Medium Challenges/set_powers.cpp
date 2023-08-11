#include <iostream>
using namespace std;


void set_power(int arr[],int len=11,int m=2);

int main()
{
	int arr[100];
	set_power(arr);
	return 0;
}

void set_power(int arr[],int len,int m)
{
	// rising array values to power m
	arr[0] = 1;
	for(int i=1; i<len; i++)
	{
		arr[i] = m;
		for(int j=1; j<i; j++)
			arr[i] *= m;
	}

	// printing the array
	for(int i=0; i<len; i++)
	{
		cout << arr[i] << " ";
	}
}

