#include <iostream>

using namespace std;

int Prefix_Sum(int arr[],int N);

int main()
{
    int arr[] = {1,2,10,30,2,5};
    cout << Prefix_Sum(arr,5) << endl;
    return 0;
}

int Prefix_Sum(int arr[],int N)
{
    if(N == 1)
        return arr[0];

    return arr[N-1] + Prefix_Sum(arr,N-1);
}
