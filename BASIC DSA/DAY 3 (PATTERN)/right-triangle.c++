// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of rows for triangle: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// question
// 1
// 1 2
// 1 2 3
// 1 2 3 4



// 1
// 2 2
// 3 3 3
// 4 4 4 4 

// 1
// 2 3
// 4 5 6
// 7 8 9 10

// -----------------------------------------------------------------------------
// A
// A B
// A B C
// A B C D

// #include <iostream>
// using namespace std;    
// int main() {
//     int n;
//     cout << "Enter the number of rows for triangle: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         char ch = 'A';
//         for (int j = 1; j <= i; j++) {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------

// A
// B B 
// C C C 
// D D D D 

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows for triangle: ";
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    }
    return 0;
}