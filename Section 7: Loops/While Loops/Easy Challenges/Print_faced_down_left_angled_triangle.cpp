#include <iostream>

using namespace std;

int main()
{
	int num,num2,ast_num;
	cin >> num;
	ast_num = num;

	while(num--)
	{
		num2 = ast_num;
		while(num2--)
			cout << "*";
		cout << "\n";
		ast_num--;
	}

	return 0;
}