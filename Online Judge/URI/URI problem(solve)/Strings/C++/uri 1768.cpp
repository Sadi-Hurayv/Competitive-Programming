#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int row, mid, start, end;
        row=(n+1)/2;
        mid=(n+1)/2;
        start=mid;
        end=mid;

        ///tree
        for(int i=0; i<row; i++)
        {
            for(int j=1; j<=end; j++)
            {
                if(j>=start)
                {
                    cout << "*" ;
                }
                else
                {
                    cout << " " ;
                }
            }
            cout << endl;
            start--;
            end++;
        }

        ///base
        start=mid;
        end=mid;
        for(int i=0; i<2; i++)
        {
            for(int j=1; j<=end; j++)
            {
                if(j>=start)
                {
                    cout << "*" ;
                }
                else
                {
                    cout << " " ;
                }
            }
            cout << endl;
            start--;
            end++;
        }
        cout << endl;
    }
    return 0;
}
