#include <iostream>

using namespace std;

int main()
{	
	int num;
	cin >> num;
	bool is_even1 = num % 2 == 0;
	bool is_even2 = num == ((num / 2) * 2);
	bool is_even3 = num % 10 % 2 == 0 ;

	cout << is_even1 << " " << is_even2 << " "  << is_even3 << endl;


	return 0;

}