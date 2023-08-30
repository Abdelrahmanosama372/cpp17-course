#include <iostream>

using namespace std;


bool Is_Palindrome(int arr[],int len);

int main()
{
    int arr1[] = {1,2,3,2,1};
    int arr2[] = {1};
    int arr3[] = {1,2};
    int arr4[] = {1,2,3,1};
    int arr5[] = {4,5,6,7,89,7,6,5,4};

    cout << boolalpha; 
    cout << Is_Palindrome(arr1,5) << endl;
    cout << Is_Palindrome(arr2,1) << endl;
    cout << Is_Palindrome(arr3,2) << endl;
    cout << Is_Palindrome(arr4,4) << endl;
    cout << Is_Palindrome(arr5,9) << endl;
    
    return 0;
}

bool Is_Palindrome(int arr[],int len)
{
    static int arr_counter {0};
    if(arr_counter == len-1)
        {
            arr_counter = 0;
            return true;
        }
    if(arr[arr_counter++] != arr[len-1])
        {
            arr_counter = 0;
            return false;
        }
    return Is_Palindrome(arr,len-1);
}