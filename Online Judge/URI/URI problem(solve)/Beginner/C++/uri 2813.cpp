#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string go, co;
    int s_go, c_go, s_co, c_co;
    s_go=0;
    s_co=0;
    c_go=0;
    c_co=0;
    for(int i=0; i<n; i++)
    {
        cin >> go >> co;
        if(go=="chuva")
        {
            if(c_go==0)
            {
                s_go++;
            }
            else
            {
                c_go--;
            }
            c_co++;
        }

        if(co=="chuva")
        {
            if(c_co==0)
            {
                s_co++;
            }
            else
            {
                c_co--;
            }
            c_go++;
        }

    }
    cout << s_go << " " << s_co << endl;
    return 0;
}
