// Lab 3 - ques 2
#include <iostream>
#include <string>
using namespace std;

void function(string s, int i = 0) {
    static int j{};

    // base case
    if (i >= s.size()) {
        cout << ++j << ": " << s << endl;
        return;
    }

    // if character at index i is an alphabet
    if (isalpha(s[i])) {
        string s1{s}, s2{s};
        s1[i] = static_cast<char>(toupper(s[i]));
        function(s1, i + 1);
        s2[i] = static_cast<char>(tolower(s[i]));
        function(s2, i + 1);
    }
    else
        function(s, ++i);
}

int main () {
    string str = "S4mp1e 5tr1ng"; // input string

    function(str); // calling the function
}
