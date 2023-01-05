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
        int len=s.length(), cnt=0;
        for(int i=0; i<len; i++)
        {
            if(i==0)
            {
                if(s[i]=='0')
                    cnt++;
            }
            else
            {
                if(s[i]!=s[i-1])
                    cnt++;
            }
        }

        cout << cnt << "\n";
    }


    return 0;
}
