#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string wrd;
    int t, n, m, a, b;

    cin >> t;

    while(t--)
    {
        cin >> n >> a >> b;

        long long int sar=0, ani=0;
        while(n--)
        {
            cin >> wrd;

            if(wrd[0]=='E' || wrd[0]=='Q' || wrd[0]=='U' || wrd[0]=='I' || wrd[0]=='N' || wrd[0]=='O' || wrd[0]=='X')
                sar+=a;
            else
                ani+=b;
        }

        if(sar>ani)
                cout << "SARTHAK\n";
            else if(sar<ani)
                cout << "ANURADHA\n";
            else
                cout << "DRAW\n";

    }
    return 0;
}
