// Lab 2 - ques 2
#include <iostream>
using namespace std;

int cal(int a, int b) {
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    return cal(a, --b) * a;
}

int main() {
    int a = 5;
    int b = 4;

    // calculate a^b
    cout << cal(a, b) << endl;
}
