#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, n, v1, v2, v3, v4;

    v1=v2=v3=v4=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a==1)
            v1++;
        else if(a==2)
            v2++;
        else if(a==3)
            v3++;
        else if(a==4)
            v4++;
    }

    if(v1>=v3)
        v1-=v3;
    else
        v1=0;

    if(v2%2==0)
        v2/=2;
    else
    {
        v2=(v2/2)+1;
        if(v1<=2)
            v1=0;
        else
            v1-=2;
    }

    if(v1%4==0)
        v1/=4;
    else
        v1=(v1/4)+1;

    cout << v1+v2+v3+v4 << "\n";

    return 0;
}
