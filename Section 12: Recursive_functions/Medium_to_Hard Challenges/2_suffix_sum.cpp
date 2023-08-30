#include <iostream>

using namespace std;

int Suffix_Sum(int arr[],int len,int N);

int main()
{
    int arr[] = {1,2,10,30,2,5};
    cout << Suffix_Sum(arr,6,3) << endl;
    return 0;
}

int Suffix_Sum(int arr[],int len,int N)
{
    if(N == 0)
        return 0;

    return arr[len-1] + Suffix_Sum(arr,len-1,N);
}