#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, h, i;
    cin >> s >> h;
    for(int i=1; ; i++)
    {
        if(h*i-s*i>=s)
        {
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}
