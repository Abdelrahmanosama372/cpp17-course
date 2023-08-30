#include <iostream>

using namespace std;

void right_max(int arr[], int len);

int main()
{
    int arr[] = {2,3,11,3,8,10,3,5};
    right_max(arr,8);

    for(int i=0; i<8; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}


void right_max(int arr[], int len)
{
    if(len == 1)
        return;

    arr[len-2] = max(arr[len-2],arr[len-1]);
    right_max(arr,len-1);
}