#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5,left=0,right=n-1;
    while (left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for (int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}