#include  <iostream>

using namespace std;

int main()
{
	// implementation must be without using loops
	int num, maxi;

	cin >> num;
	maxi = num;
	cin >> num;		if(num > maxi) maxi = num; 
	cin >> num;		if(num > maxi) maxi = num; 
	cin >> num;		if(num > maxi) maxi = num; 
	cin >> num;		if(num > maxi) maxi = num; 
	cin >> num;		if(num > maxi) maxi = num; 
	cin >> num;		if(num > maxi) maxi = num; 
	cin >> num;		if(num > maxi) maxi = num; 
	cin >> num;		if(num > maxi) maxi = num; 
	cin >> num;		if(num > maxi) maxi = num; 

	cout << maxi << endl;

	return 0;
}