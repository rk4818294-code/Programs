#include<iostream>
#include<stack>
using namespace std;
int main() {

stack<int> st;

// element insert
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);

// excess the elements
cout << " top Elements in stack: " << st.top() << endl;

// delete the elements


// st.pop();
// if (st.empty()) {
//     cout << "Stack is empty" << endl;
// } else {
//     cout << "Stack is not empty" << endl;
// }

// or

while (!st.empty()) {
    cout << "Elements in stack: " << st.top() << endl;
    st.pop();
}

cout << " size Elements in stack: " << st.size() << endl;


return 0;

}

