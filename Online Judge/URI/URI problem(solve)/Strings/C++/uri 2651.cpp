#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    s2="zelda";
    auto it=std::search(s1.begin(), s1.end(), s2.begin(), s2.end(), [](char ch1, char ch2) { return std::toupper(ch1) == std::toupper(ch2); });
    if(it!=s1.end())
    {
        cout << "Link Bolado" << endl;
    }
    else
    {
        cout << "Link Tranquilo" << endl;
    }


    return 0;
}
