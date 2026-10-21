#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,1,4,5,3,6,7,0,8,9};
    int n=10;
    int target;
    int index=-1;
    for (int i=0;i<n;i++){cout<<arr[i]<<" ";}
    cout<<"index position of any element in array: ";
    cin>>target;
    for (int i=0;i<n;i++){
        if (arr[i]==target)
        {
            index=i;
            break;
        }
    }
    cout<<index;
}