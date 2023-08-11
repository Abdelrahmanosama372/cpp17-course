#include <iostream>
#include <limits.h>
using namespace std;

int max_val(int a,int b=INT_MIN ,int c=INT_MIN ,int d=INT_MIN, int e=INT_MIN, int f=INT_MIN);


int main()
{
	cout << max_val(24,534,654) << endl;
	cout << max_val(45,44,66,24)<< endl;
	cout << max_val(45,44,66,24,4)<< endl;
	cout << max_val(45,44,66,24,534,654)<< endl;

	return 0;
}

int max_val(int a,int b ,int c ,int d, int e, int f)
{
	int max = a;
	if (max < b) max =b;
	if (max < c) max =c;
	if (max < d) max =d;
	if (max < e) max =e;
	if (max < f) max =f;
	return max;
}