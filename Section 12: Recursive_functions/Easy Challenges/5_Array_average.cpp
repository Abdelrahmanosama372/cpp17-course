#include <iostream>

using namespace std;

double average(double arr[], int len);

int main()
{
    double arr[] = {1.3,2.5,10.2,30,62};
    cout << average(arr,5) << endl;

    return 0;
}

double average(double arr[], int len)
{
    if(len == 1)
        return arr[0];

   int sum = average(arr,len-1) *(len-1);

    return sum / len;
}