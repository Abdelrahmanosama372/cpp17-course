#include <iostream>
using namespace std;


bool starts_with(string input, string pattern, int pos);
string replace_str(string input, string pattern, string to);

int main()
{
	cout << replace_str("heaaao woraaad","aaa","ll");
}

bool starts_with(string input, string pattern, int pos)
{
	if(pos + pattern.length() > input.length())
		return false;
	for(int i=0; i<pattern.length(); i++)
	{
		if(input[pos+i] != pattern[i])
			return false;
	}
	return true;
}

string replace_str(string input, string pattern, string to)
{
	string output {""};
	for(int i=0; i<input.length(); i++)
	{
		if(starts_with(input,pattern,i))
		{
			output += to; 
			i += pattern.length()-1;
		}
		else
			output += input[i];
	}
	return output;
}

