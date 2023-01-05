#include<bits/stdc++.h>
using namespace std;

//typedef struct VEC
//{
//    int r, c;
//    bool good;
//}VEC;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, n, m, q, x, y, v;

    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<vector<int>> mat( n , vector<int> (m));
        vector<map<int, int>> dia(n+m-1);
        vector<bool> check(n+m-1);
        long long int gd_cnt=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> mat[i][j];
                dia[j-i+n-1][mat[i][j]]++;
            }
        }

        for(int i=0; i<n+m-1; i++)
        {
            if(dia[i].size()==1)
            {
                check[i]=true;
                gd_cnt++;
            }
            else
            {
                check[i]=false;
            }
        }


        cin >> q;
        while(q--)
        {
            cin >> x >> y >> v;
            x--;
            y--;
            dia[y-x+n-1][mat[x][y]]--;
            if(dia[y-x+n-1][mat[x][y]]==0)
                dia[y-x+n-1].erase(mat[x][y]);
            mat[x][y]=v;
            dia[y-x+n-1][v]++;

            if(dia[y-x+n-1].size()==1)
            {
                if(check[y-x+n-1]==false)
                {
                    check[y-x+n-1]=true;
                    gd_cnt++;
                }
            }
            else
            {
                if(check[y-x+n-1]==true)
                {
                    check[y-x+n-1]=false;
                    gd_cnt--;
                }
            }

            if(gd_cnt==n+m-1)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }


        }
    }

    return 0;
}
