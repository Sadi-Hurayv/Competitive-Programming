#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    while(t--)
    {
        int c=0, f=1;
        string s;

        cin >> n;
        cin >> s;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='H')
                c++;
            else if(s[i]=='T')
                c--;

            if(c==-1 || c==2)
            {
                f=0;
                break;
            }
        }
        if(c)
            f=0;
        if(f)
            cout << "Valid\n";
        else
            cout << "Invalid\n";

    }
    return 0;
}
