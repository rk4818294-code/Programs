#include <iostream>  // A=65    z= 91
using namespace std; // a=97    z= 122
int main(){
  string s;
  int c = 0;
  cout << " string : ";
  getline(cin, s);

  for (char ch : s){
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || 
      ch == 'I' || ch == 'O' || ch == 'U'){
        c++;
    }
  }
  cout << "count  vowewls : " << c << endl;
}