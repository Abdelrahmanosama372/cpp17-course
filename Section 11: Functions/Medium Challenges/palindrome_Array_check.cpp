#include <iostream>
using namespace std;


bool check_array(int arr[],int len);

int main()
{
	int arr[100];
	int num;
	cout << "enter the array size: " << endl;
	cin >> num;
	for(int i=0; i<num; i++)
	{
		cin >> arr[i];
	}
	cout << check_array(arr,num);
	return 0;
}

bool check_array(int arr[],int len)
{
	for(int i=0; i<len/2; i++)
	{
		if(arr[i] != arr[len-1-i])
			return false;
	}
	return true;
}

