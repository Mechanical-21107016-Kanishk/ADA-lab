// Lab 3 - ques 1
#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s) {
    while (s.empty() == false) {
        cout << s.top() << "   ";
        s.pop();
    }
    cout << endl;
}

stack<int> reverseStack(stack<int> s) {
    stack<int> sub;
    while (s.empty() == false) {
        sub.push(s.top());
        s.pop();
    }
    return sub;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "STACK: ";
    printStack(s);

    s = reverseStack(s);

    cout << "REVERSED STACK: ";
    printStack(s);
}
