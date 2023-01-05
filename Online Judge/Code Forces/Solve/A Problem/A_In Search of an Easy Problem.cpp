#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag=1, tmp;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        if(tmp)
            flag=0;
    }
    if(flag)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }

    return 0;
}
