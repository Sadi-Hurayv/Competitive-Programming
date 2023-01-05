#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int len=s.length(), cnt=1;
        int f=0;

        for(int i=1; i<len; i++)
        {
            if(s[i]!=s[i-1])
                cnt++;
            else
                cnt=1;

            if(cnt==3)
            {
                f=1;
                break;
            }
        }

        if(f)
            cout << "Good\n";
        else
            cout << "Bad\n";
    }

    return 0;
}
