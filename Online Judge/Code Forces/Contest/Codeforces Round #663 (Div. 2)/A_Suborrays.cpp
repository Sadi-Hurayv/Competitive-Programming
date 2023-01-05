#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    for(int i=0; i<a; i++)
    {
        cin >> b;
        for(int j=b; j>0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
