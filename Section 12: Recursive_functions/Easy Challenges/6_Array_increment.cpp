#include <iostream>

using namespace std;

void array_increment(int arr[], int len);

int main()
{
    int arr[] = {1,3,4,6,7,10};
    array_increment(arr,6);

    for(int i=0; i<6; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}

void array_increment(int arr[], int len)
{
    if(len == 0)
        return;
    array_increment(arr,len-1);
    arr[len-1] += len-1;
    
}
