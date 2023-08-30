#include <iostream>

using namespace std;

void accumulate_arr(int arr[], int len);

int main()
{
    int arr[] = {2,3,5,6,4,3};
    accumulate_arr(arr,6);

    for(int i=0; i<6; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}

int sum(int arr[], int len)
{
    if(len == 1)
        return arr[0];

    return arr[len-1] + sum(arr,len-1);
}

void accumulate_arr(int arr[], int len)
{
    if(len == 1)
        return;

    arr[len-1] += sum(arr,len-1);
    accumulate_arr(arr,len-1);
}