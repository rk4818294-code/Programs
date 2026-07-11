// Count uppercase letters using recursion
#include <iostream>
using namespace std;
int countUppercase(string str, int i) {
    if (i == str.length()) {
        return 0;
    }

    if (str[i] >= 'A' && str[i] <= 'Z') {
        return 1 + countUppercase(str, i + 1);
    }

    return countUppercase(str, i + 1);
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Uppercase letters: " << countUppercase(str, 0) << endl;

    return 0;
}