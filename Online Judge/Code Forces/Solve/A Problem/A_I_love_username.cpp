#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, mn, mx, point, c=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> point;
        if(i==0)
        {
            mn=mx=point;
        }
        else
        {
            if(point > mx)
            {
                c++;
                mx=point;
            }
            else if(point < mn)
            {
                c++;
                mn=point;
            }
        }
    }

    cout << c;
    return 0;
}
