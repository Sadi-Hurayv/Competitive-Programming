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
        cin >> n;

        cin >> wrd;
        long long int len = wrd.length(), one=0;

        for(int i=0; i<len; i++)
            if(wrd[i]=='1')
                one++;

        cout << (one*(one+1))/2 << "\n";

    }
    return 0;
}
