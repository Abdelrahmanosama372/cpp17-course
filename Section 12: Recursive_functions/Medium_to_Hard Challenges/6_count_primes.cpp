#include <iostream>

using namespace std;

int count_primes(int start, int end);
int is_prime(int num);

int main()
{
    cout << count_primes(10,20) << endl;
    cout << count_primes(10,200) << endl;
    
    return 0;
}

int is_prime(int num)
{
    static int counter {0};
    if(num <= 1)
        return 0;
    if(num-1 == 1)
    {
        counter = 0;
        return 1;
    }
       
    if((num+counter) % (num-1) == 0)
    {
        counter = 0;
        return 0;
    }    
    counter++;
    return is_prime(num-1);
}

int count_primes(int start, int end)
{
    if(start > end)
        return 0;
    return is_prime(start)+count_primes(start+1,end);
}
