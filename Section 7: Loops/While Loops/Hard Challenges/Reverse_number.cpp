#include <iostream>
#include <string.h>
#include <math.h>


using namespace std;

int main()
{
	int num, num_reversed {0};
	cin >> num;

	while(num)
	{
		num_reversed += (num % 10) * pow(10,((int)to_string(num).length() - 1));
		num /= 10;
	}

	cout << num_reversed << " " << num_reversed*3 << endl;
	
	return 0;
} 