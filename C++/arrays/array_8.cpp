#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr;
    int input;

    cout << "Enter numbers (enter any letter or EOF to stop): ";
    
    // Keeps reading integers until input fails or ends
    while (cin >> input) {
        arr.push_back(input);
    }

    cout << "You entered " << arr.size() << " elements: ";
    for (int num : arr) {
        cout << num << " ";
    }
    
    return 0;
}
