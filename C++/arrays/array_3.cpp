#include <iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    int largest = arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>largest){largest=arr[i];}
    }
    cout<<largest;
    return 0;
}