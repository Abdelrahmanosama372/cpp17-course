#include <iostream>

using namespace std;

int main()
{	
	int a,b,c,d,e;
	double average;
	cin >> a >> b >> c >> d >> e;

	average = (a+b+c+d+e)/5.0;
	cout << average << endl;

	average = static_cast<double>(a+b+c) / (d+e);
	cout << average << endl;

	average = ((a+b+c) / 3.0 ) / ((d+e) / 2.0 );
	cout << average << endl;

	return 0;

}