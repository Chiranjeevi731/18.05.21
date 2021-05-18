#include <iostream>
#include <algorithm>
using namespace std;
 int n;
// Utility function to print contents of an array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
 
// Recursive function to reverse elements of a subarray formed
// by `arr[low, high]`
void reverse(int arr[], int low)
{
    if (low < n-1-low)
    {
        swap(arr[low], arr[n-1-low]);
        reverse(arr, low + 1);
    }
}
 
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    //int n = 
	n=sizeof(arr)/sizeof(arr[0]);
     int low=0,high=n-1;
    reverse(arr, low);
    print(arr, n);
 
    return 0;
}