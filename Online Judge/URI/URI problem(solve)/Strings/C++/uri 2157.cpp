#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, rem, tmp;
    string str, num;
    char ch;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        str="";
        cin >> a >> b;
        for(int j=a; j<=b; j++)
        {
            tmp=j;
            num="";
            while(tmp!=0)
            {
                rem=tmp%10;
                tmp=tmp/10;
                ch=(char)('0'+rem);
                num+=ch;
            }
            str.append(num.rbegin(),num.rend());
        }

        cout << str;
        reverse(str.begin(),str.end());
        cout << str << endl;
    }
    return 0;
}
