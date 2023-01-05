#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string wrd;
    int t, n, m, x, y;

    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        cin >> x >> y;

        while(n--)
        {
            cin >> wrd;
            int u, f, p;
            u=f=p=0;

            for(char c : wrd)
            {
                if(c=='U')
                    u++;
                else if(c=='F')
                    f++;
                else if(c=='P')
                    p++;
            }

            int flag=0;
            if(f>=x)
                flag=1;
            else if(f==(x-1) && p>=y)
                flag=1;

            if(flag)
                cout << "1";
            else
                cout << "0";
        }
        cout << "\n";
    }

    return 0;
}


