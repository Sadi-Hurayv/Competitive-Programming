#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4, i2;
    double d = 4.0, d2;
    string s = "HackerRank ", s2;
    cin >> i2;
    cin >> d2;
    cin.ignore();
    getline(cin,s2);
    cout << i+i2 << endl;
    cout.precision(1);
    cout << fixed << d+d2 << endl;
    cout << s+s2 << endl;
    return 0;
}
