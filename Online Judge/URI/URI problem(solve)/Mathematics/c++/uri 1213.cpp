#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c;
    while(cin >> n)
    {
        m=1;
        c=1;
        while(m%n!=0)
        {
            m=(m*10+1)%n;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}
