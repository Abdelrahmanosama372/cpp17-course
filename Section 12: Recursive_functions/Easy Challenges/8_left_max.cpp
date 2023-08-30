#include <iostream>

using namespace std;

void left_max(int arr[], int len);

int main()
{
    int arr[] = {2,3,5,6,4,3,8,9,3,2,10,3,5};
    left_max(arr,13);

    for(int i=0; i<13; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}

void left_max(int arr[], int len)
{
    if(len == 1)
        return;
    left_max(arr,len-1);
    arr[len-1] = max(arr[len-1],arr[len-2]);
}