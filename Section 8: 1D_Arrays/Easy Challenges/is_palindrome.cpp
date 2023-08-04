#include <iostream>

using namespace std;

int main()
{	
	int arr[1000];
	bool palindrome = true;

	int num;
	cin >> num;

	for(int i=0; i<num; i++)
		cin >> arr[i];

	for(int i=0; i<num/2; i++)
	{
		if(arr[i] != arr[num-i-1])
		{
			palindrome = false;
			break;
		}
	}

	if(palindrome)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}