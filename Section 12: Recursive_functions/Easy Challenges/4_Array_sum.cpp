#include <iostream>

using namespace std;

int sum(int arr[], int len);

int main()
{
    int arr[] = {1,2,10,30,2,5};
    cout << sum(arr,6) << endl;

    return 0;
}

int sum(int arr[], int len)
{
    if(len == 1)
        return arr[0];

    return arr[len-1] + sum(arr,len-1);
}