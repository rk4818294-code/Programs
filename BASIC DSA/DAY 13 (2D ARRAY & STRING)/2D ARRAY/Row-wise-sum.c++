#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "Enter Number :  ";
            cin >> arr[i][j];
        }
    }
    int s=0;
    for (int i = 0; i < 3; i++){
     int sum = 0;
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
            s=s+arr[i][j];
            sum += arr[i][j];
        }

        cout << " sum of Row: " << sum << endl;
    }
        cout << " total sum : " << s << endl;
}