#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    std::vector<int>pool(n);
    for(int i=0; i<n; i++)
    {
        cin >> pool[i];
    }
    for(int i=n-1; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            pool[j]=pool[j]*pool[j+1];
        }
    }

    if(pool[0]==-1)
    {
        cout << "branca" << endl;
    }
    else
    {
        cout << "preta" << endl;
    }

    return 0;
}
