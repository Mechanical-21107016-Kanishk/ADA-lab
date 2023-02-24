// Lab 1 - ques 1
#include <iostream>
#include <vector>
using namespace std;

int count(int n) {
    vector<int> vec{}; // creating a vector to store results

    vec[0] = 1;
    vec[1] = 1;
    vec[2] = 2;

    for (int i = 3; i <= n; i++)
        vec[i] = vec[i - 1] + vec[i - 2] + vec[i - 3];
 
    return vec[n];
}

int main() {
    int n = 4;

    cout << count(n);
}
