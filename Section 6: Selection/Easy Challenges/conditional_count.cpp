#include  <iostream>

using namespace std;

int main()
{
	int num, num2, val_lteq_num {0}, val_mt_num {0};
	cin >> num;

	for(int i=0; i<5; i++)
	{
		cin >> num2;
		if(num2 > num)
			val_mt_num++;
		else
			val_lteq_num++;
	}

	cout << val_lteq_num << " " <<val_mt_num << endl;

	return 0;
}