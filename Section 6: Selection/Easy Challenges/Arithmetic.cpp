#include  <iostream>

using namespace std;

int main()
{
	int A , B;
	cin >> A >> B;

	// A is odd and B is odd
	if(A % 2 != 0 && B % 2 != 0)
		cout << A*B << endl;

	// A is even and B is even
	else if(A % 2 == 0 && B % 2 == 0)
		cout << float(A)/B << endl;

	// A is odd and B is even
	else if(A % 2 != 0 && B % 2 == 0)
		cout << A+B << endl;

	// A is even and B is odd
	else
		cout << A-B << endl;

	return 0;
}