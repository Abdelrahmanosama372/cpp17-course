#include <iostream>
#include <string.h>
using namespace std;

string reverse_str(const string &str);


int main()
{
	cout << reverse_str("hello world") <<endl;
	cout << reverse_str("c++ programming") <<endl;
	return 0;
}

string reverse_str(const string &str)
{
	char temp {};
	int str_length = str.length();
	string rev_str = str;
	for(int i= 0; i < (str_length/2); i++)
	{
		temp = rev_str[i];
		rev_str[i] = rev_str[str_length-i-1];
		rev_str[str_length-i-1] = temp;
	}
	return rev_str;
}