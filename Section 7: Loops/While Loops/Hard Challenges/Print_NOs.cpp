#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
	int num;
	string str;
	bool str_length_2, first_char_check, second_char_check;
	char char_1, char_2;

	cin >> num;
	while(num --)
	{
		cin >> str;
		if(str[0] -32 == str[1] || str[0] == str[1] -32 )
			continue;

		str_length_2 = str.length() == 2;
		first_char_check = str[0] == 'n' || str[0] == 'N' || str[0] == 'o' || str[0] == 'O';
		second_char_check = (str[1] == 'n' || str[1] == 'N' || str[1] == 'o' || str[1] == 'O');

		if(str_length_2 && first_char_check && second_char_check)
			cout << str << " ";
	}

	cout << "\n";
	


	return 0;
} 