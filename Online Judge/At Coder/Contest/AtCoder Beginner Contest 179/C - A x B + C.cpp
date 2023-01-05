#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tar, tmp1, tmp2, tmp3;
    long long int c=0;
    cin >> n;
    tar=sqrt(n-1);

    for(int i=1; i<=tar; i++)
    {
        tmp1=(n-1)/i;
        tmp2=tmp1*2-1;
        tmp3=tmp2-((i-1)*2);
        c+=tmp3;
    }

    cout << c << endl;

    return 0;
}
