#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(),s1.end(),s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    const char* ch1=s1.c_str();
    const char* ch2=s2.c_str();
    cout << strcmp(ch1,ch2) << endl;
    return 0;
}
