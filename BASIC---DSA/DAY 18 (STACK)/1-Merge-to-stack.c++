// merge to stack
#include <iostream>
#include <stack>
using namespace std ;
int main() {
    stack<int> stack1;
    stack<int> stack2;

    // Push elements into stack1
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    // Push elements into stack2
    stack2.push(4);
    stack2.push(5);
    stack2.push(6);

    // Merge stack2 into stack1
    while (!stack2.empty()) {
        stack1.push(stack2.top());
        stack2.pop();
    }

    // Display merged stack
    cout << "Merged Stack: ";
    while (!stack1.empty()) {
       cout << stack1.top() << " ";
        stack1.pop();
    }
    cout << endl;

    return 0;
}