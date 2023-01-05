#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, tmp, mul;
    mul=1;
    cin >> n;
    while(n--)
    {
        cin >> tmp;
        mul=(mul*tmp)%(1000000000 + 7);

    }
    cout << mul << "\n";
    return 0;
}

