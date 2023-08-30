#include <iostream>

using namespace std;


bool is_prefix(string main, string prefix);

int main()
{
    string main = "abcdefgh";
    string prefix = "abcd";
    cout << is_prefix(main,prefix) << endl;

    prefix = "";
    cout << is_prefix(main,prefix) << endl;

    prefix = "abd";
    cout << is_prefix(main,prefix) << endl;
    return 0;
}

bool is_prefix(string main, string prefix)
{
    if(prefix.length() == 0)
        return true;

    if(main[0] != prefix[0])
        return false;

    return is_prefix(main.substr(1),prefix.substr(1));
}
