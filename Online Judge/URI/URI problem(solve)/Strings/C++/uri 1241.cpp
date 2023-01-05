#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag;
    string s1, s2;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        flag=1;
        cin >> s1 >> s2;
        for(int j=s1.length()-1, k=s2.length()-1; k>=0; j--, k--)
        {
            if(s2[k]!=s1[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout << "encaixa" << endl;
        }
        else
        {
            cout << "nao encaixa" << endl;
        }

    }

    return 0;
}
