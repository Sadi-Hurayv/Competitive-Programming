#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    for(char c; c!='\n'; c=getchar())
    {
        if(c=='H' || c=='Q' || c=='9')
            flag=1;
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
