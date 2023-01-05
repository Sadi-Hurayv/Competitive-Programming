#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, tmp, c=0;
    cin >> n >> h;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        if(tmp>h)
            c+=2;
        else
            c++;
    }
    cout << c << endl;

    return 0;
}
