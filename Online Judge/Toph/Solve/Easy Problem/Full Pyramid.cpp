#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sp;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        sp=n-i;
        for(int j=0; j<sp; j++)
        {
           cout << " ";
        }
        for(int j=0; j<i; j++)
        {
            if(j==i-1)
                cout << "*\n";
            else
                cout << "* ";
        }
    }
    return 0;
}
