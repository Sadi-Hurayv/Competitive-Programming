#include <bits/stdc++.h>
using namespace std;



int main () {
    string s;
    while (cin >> s) {
        for (int i = 2; i <= 10; i++) {
            cin >> s;
            if (i == 3) cout << s << endl;
            if (i == 7) cout << s << endl;
            if (i == 9) cout << s << endl;
        }
    }
}

