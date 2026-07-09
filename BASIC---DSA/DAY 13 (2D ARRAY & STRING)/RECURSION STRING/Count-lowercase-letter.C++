// Count lowercase letters using recursion
#include <iostream>
using namespace std;
int countLowercase(string str, int i) {
    if (i == str.length()) {
        return 0;
    }

    if (str[i] >= 'a' && str[i] <= 'z') {
        return 1 + countLowercase(str, i + 1);
    }

    return countLowercase(str, i + 1);
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Lowercasecase letters: " << countLowercase(str, 0) << endl;

    return 0;
}