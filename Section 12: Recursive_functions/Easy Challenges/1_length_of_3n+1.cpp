#include <iostream>

using namespace std;


int length_3n_plus_1(int n);

int main()
{
    cout << length_3n_plus_1(6) << endl;
    cout << length_3n_plus_1(9) << endl;

    return 0;
}

int length_3n_plus_1(int n)
{
    if(n == 1)
        return 1;
    if(n % 2 == 0)
        return 1+length_3n_plus_1(n/2);
    
    return 1+length_3n_plus_1(3*n+1);
}