#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, x, q, qt, tmp_x, c, id, id_s;
    cin >> t;
    while(t--)
    {
        vector<int>num(30);
        cin >> x >> q;
        tmp_x=x;
        c=0;
        while(tmp_x)
        {
            num[c]=tmp_x%2;
            tmp_x=tmp_x/2;
            c++;
        }

        while(q--)
        {
            cin >> qt;
            if(qt==1)
            {
                cin >> id;
                if(num[id-1])
                {
                    cout << "ON\n";
                }
                else
                {
                    cout << "OFF\n";
                }
            }
            else if(qt==2)
            {
                cin >> id;
                num[id-1]=1;
            }
            else if(qt==3)
            {
                cin >> id;
                num[id-1]=0;
            }
            else if(qt==4)
            {
                cin >> id >> id_s;
                swap(num[id-1], num[id_s-1]);
            }
        }
    }

    return 0;
}
