#include<bits/stdc++.h>
using namespace std;

string s[1010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;


    for(int i=0; i<n; i++)
        cin >> s[i];

    int f;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int c, tk;
            f=0;


            if(j+5<n)//horizontal
            {
                c=0;
                for(int k=0; k<6; k++)
                {
                    if(s[i][j+k]=='#')
                        c++;
                }
                if(c>=4)
                {
                    f=1;
                    break;
                }

            }
            if(i+5<n) //vertical
            {
                c=0;
                for (int k=0; k<6; k++)
                {
                    if(s[i+k][j]=='#')
                        c++;
                }
                if(c>=4)
                {
                    f=1;
                    break;
                }
            }
            if(i+5<n && j+5<n) //diagonal right
            {
                c=0;
                for (int k=0; k<6; k++)
                {
                    if(s[i+k][j+k]=='#')
                        c++;
                }
                if(c>=4)
                {
                    f=1;
                    break;
                }
            }
            if(i+5<n && j-5>=0) //diagonal left
            {
                c=0;
                for (int k=0; k<6; k++)
                {
                    if(s[i+k][j-k]=='#')
                        c++;
                }
                if(c>=4)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
            break;
    }

    if(f)
        cout << "Yes\n";
    else
        cout<< "No\n";


    return 0;
}
