#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;
    while(num!="0")
    {
        int len, des=0, fact=1;
        len=num.size();
        for(int i=len-1; i>=0; i--)
        {
            fact=fact*(len-i);
            des+=(num[i]-'0')*fact;
//            cout << num[i] << " -> " << fact << " -> " << des << endl;
        }
        cout << des << endl;
        cin >> num;
    }

  return 0;
}
