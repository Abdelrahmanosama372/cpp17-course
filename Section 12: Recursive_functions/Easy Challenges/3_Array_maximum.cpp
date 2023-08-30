#include <iostream>

using namespace std;


int arr_max(int arr[], int len);

int main()
{
    int arr[] = {1,2,10,30,2,5};
    cout << arr_max(arr,6) << endl;
    
    return 0;
}

int arr_max(int arr[], int len)
{
    if(len == 1)
        return arr[0];
    return max(arr[len-1],arr_max(arr,len-1));
}