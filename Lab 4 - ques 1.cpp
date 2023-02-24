// Lab 4 - ques 1
#include <iostream>
#include <stack>
using namespace std;

// function to print stack
void printStack(stack<int> s) {
    cout << "Stack: ";
    while (s.empty() == false) {
        cout << s.top() << "   ";
        s.pop();
    }
    cout << endl;
}

// function to reverse stack
stack<int> reverseStack(stack<int> s) {
    stack<int> sub;
    while (s.empty() == false) {
        sub.push(s.top());
        s.pop();
    }
    return sub;
}

// function to sort stack recursively
stack<int> sortStack(stack<int> s) {
    // base case
    if (s.size() <= 1)
        return s;

    stack<int> s1;
    stack<int> s2;

    while (true) {
        if (s.empty() == false) {
            s1.push(s.top());
            s.pop();
        }
        else 
            break;

        if (s.empty() == false) {
            s2.push(s.top());
            s.pop();
        }
        else    
            break;
    }

    s1 = sortStack(s1);
    s1 = reverseStack(s1);
    s2 = sortStack(s2);
    s2 = reverseStack(s2);

    while (s1.empty() == false && s2.empty() == false) {
        if (s1.top() < s2.top()) {
            s.push(s1.top());
            s1.pop();
        }
        else {
            s.push(s2.top());
            s2.pop();
        }
    }

    while (s1.empty() == false) {
        s.push(s1.top());
        s1.pop();
    }

    while (s2.empty() == false) {
        s.push(s2.top());
        s2.pop();
    }

    return s;
}

int main () {
    stack<int> s;
    s.push(5);
    s.push(1);
    s.push(2);
    s.push(6);
    s.push(4);
    s.push(9);
    s.push(7);
    s.push(8);
    s.push(3);


    printStack(s);

    s = sortStack(s);

    cout << "Sorted ";
    printStack(s);
}
