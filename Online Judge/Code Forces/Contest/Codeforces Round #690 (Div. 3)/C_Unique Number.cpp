#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;

    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        vector<int> num;
        if(n>45)
        {
            cout << "-1\n";
        }
        else
        {
            for(int j=9; j>0; j--)
            {
                if(n-j==0)
                {
                    num.push_back(j);
                    break;
                }
                else if(n-j>0)
                {
                    num.push_back(j);
                    n=n-j;
                }
            }
            for(int k=num.size()-1; k>=0; k--)
            {
                cout << num[k];
            }
            cout << "\n";
        }
    }

    return 0;
}
