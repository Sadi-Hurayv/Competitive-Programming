#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tc, n, m, x;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        int arr[n][m];
        string s;
        for(int i=0; i<n; i++)
        {
            cin >> s;
            for(int j=0; j<m; j++)
                arr[i][j]=s[j]-'0';
        }

        bool f=true;
        int c=0;
        vector< vector<int> > vt(n*m);
        for(int i=n-1; i>=0; i--)
        {
            for(int j=m-1; j>=0; j--)
            {
                if(i==0 && j==0)
                {
                    if(arr[i][j]==1)
                    {
                        f=false;
                    }
                }
                else
                {
                    if(i==0)
                    {
                        if(arr[i][j]==1)
                        {
                            vt[c].push_back(i+1);
                            vt[c].push_back(j); ///j-1+1
                            vt[c].push_back(i+1);
                            vt[c].push_back(j+1);
                            c++;
                        }
                    }
                    else if(j==0)
                    {
                        if(arr[i][j]==1)
                        {
                            vt[c].push_back(i); ///i-1+1
                            vt[c].push_back(j+1);
                            vt[c].push_back(i+1);
                            vt[c].push_back(j+1);
                            c++;
                        }
                    }
                    else
                    {
                        if(arr[i][j]==1)
                        {
                            vt[c].push_back(i+1);
                            vt[c].push_back(j); ///j-1+1
                            vt[c].push_back(i+1);
                            vt[c].push_back(j+1);
                            c++;

//                                vt[c].push_back(i); ///i-1+1
//                                vt[c].push_back(j+1);
//                                vt[c].push_back(i+1);
//                                vt[c].push_back(j+1);
//                                c++;
                        }
                    }
                }
            }
        }

        if(f)
        {
            cout << c << "\n";
            for(int i=0; i<c; i++)
            {
                for(auto it : vt[i])
                    cout << it << " ";

                cout << "\n";
            }
        }
        else
            cout << "-1\n";
    }

    return 0;
}
