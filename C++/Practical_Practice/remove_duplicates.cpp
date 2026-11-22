#include <iostream> //1.The outer loop selects an element
using namespace std;//2.The inner loop checks whether that element appears again in the array
int main() {        //3.If a duplicate is found, the elements after it are shifted one position to the left
    int arr[100], n;//4.The array size n is decreased by 1
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}