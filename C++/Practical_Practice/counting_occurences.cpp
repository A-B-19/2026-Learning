#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char* argv[]) {
    int count[26] = {0};
    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            char ch = argv[i][j];
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }
            if (ch >= 'a' && ch <= 'z') {
                count[ch - 'a']++;
            }
        }
    }
    cout << "Alphabet\tOccurrences" << endl;
    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << "\t\t" << count[i] << endl;
    }
}