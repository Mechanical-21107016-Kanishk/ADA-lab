// Lab 1 - ques 2
#include <iostream>
using namespace std;

bool getLast(int bricks, int round = 1) {
    bricks = bricks - round; // bricks put by patlu
    if (bricks <= 0)
        return 0;

    bricks = bricks - 2 * round; // bricks put by motu
    if (bricks <= 0)
        return 1;

    bool result = getLast(bricks, ++round);
    return result;
}

int main() {
    int n = 13;

    cout << (getLast(n) ? "Motu" : "Patlu");
}
