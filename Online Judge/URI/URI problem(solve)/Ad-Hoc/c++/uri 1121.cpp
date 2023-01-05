#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[4] = {-1, 0, 1, 0};
    int y[4] = {0, 1, 0, -1};
    string dir = "NLSO";
    string co, mat[105];
    char ch;
    int n, m, s, pi, pj, flag, d, c;

    while((cin >> n >> m >> s) && (n!=0 && m!=0 && s!=0))
    {
        c=0;
        flag=0;
        for(int i=0; i<n; i++)
        {
            cin >> mat[i];
            for(int j=0; j<m; j++)
            {
                if(flag)
                {
                    break;
                }
                ch=mat[i][j];
                if(ch=='N' || ch=='O' || ch=='L' || ch=='S')
                {
                    pi = i;
                    pj = j;
                    flag=1;
                }
            }
        }

        for (int i=0; i<4; i++)
        {
            if (mat[pi][pj]==dir[i])
            {
                d=i;
                break;
            }
        }

        cin >> co;

        for(int i=0; i<s; i++)
        {
            if (co[i]=='E')
            {
                d=(d+3)%4;
            }
            else if(co[i]=='D')
            {
                d=(d+1)%4;
            }
            else if(pi+x[d]!=n && pj+y[d]!=m && pi+x[d]>=0 && pj+y[d]>=0)
            {
                ch = mat[pi+x[d]][pj+y[d]];
                if (ch!='#')
                {
                    mat[pi][pj]='.';
                    if(ch=='*')
                    {
                        c++;
                    }
                    pi+=x[d];
                    pj+=y[d];
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}

