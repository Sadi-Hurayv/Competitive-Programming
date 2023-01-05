#include <bits/stdc++.h>
using namespace std;


string s;

int main () {
    getline(cin, s);
    for (auto c : s) {
        if (c != ',') cout << c;
        else cout << endl;
    }
    cout << endl;
    return 0;
}
