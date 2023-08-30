#include <iostream>

using namespace std;


int fibonacci(int n);

int main()
{
    cout << fibonacci(0) << endl;
    cout << fibonacci(1) << endl;
    cout << fibonacci(2) << endl;
    cout << fibonacci(3) << endl;
    cout << fibonacci(4) << endl;
    cout << fibonacci(5) << endl;

    return 0;
}

int fibonacci(int n)
{ 
    if(n == 0)
        return 1;
    if(n < 0)
        return 0;
    
    return fibonacci(n-1) + fibonacci(n-2);
}
