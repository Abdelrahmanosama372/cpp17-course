#include <iostream>

using namespace std;

int main()
{
	int num,num2,ast_num {1};
	cin >> num;

	while(num--)
	{
		num2 = ast_num;
		while(num2--)
			cout << "*";
		cout << "\n";
		ast_num++;
	}

	return 0;
}