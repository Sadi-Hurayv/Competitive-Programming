#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, a3, a4, mini;
    cin >> a1 >> a2 >> a3 >> a4;
    mini=a1;
    mini=min(a2,mini);
    mini=min(a3,mini);
    mini=min(a4,mini);
    cout << mini << "\n";

    return 0;
}
