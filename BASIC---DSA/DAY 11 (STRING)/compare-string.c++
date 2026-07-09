#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter string : ";
    getline(cin, s1);
    cout << "Enter string : ";
    getline(cin, s2);

    if (!s1.compare(s2))
        cout << "equal";
    else
        cout << "not equal";

   
}