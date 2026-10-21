#include <iostream>
using namespace std;
int main()
{
    int arr[]={4,8,12,16};
    int n=4,target=12,index=-1;
    for (int i=0;i<n;i++){
        if (arr[i]==target){
            index=i;
            break;
        }
    }
    cout<<index;
}