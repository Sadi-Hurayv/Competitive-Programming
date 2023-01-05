#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, l1, l2, flag;
    string s1, s2;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s1 >> s2;
        l1=s1.size();
        l2=s2.size();

        for(int j=0; ; j++)
        {
            flag=0;
            if(j<l1)
            {
                cout << s1[j];
                flag=1;
            }
            if(j<l2)
            {
                cout << s2[j];
                flag=1;
            }
            if(flag==0)
            {
                cout << endl;
                break;
            }
        }

    }
    return 0;
}
