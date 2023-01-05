#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,fs,no;
    cin >> a >> b;
    int mn=min(a,b);
    int mx=max(a,b);
    fs=mn;
    no=(mx-mn)/2;

    cout << fs << " " << no;

    return 0;
}
