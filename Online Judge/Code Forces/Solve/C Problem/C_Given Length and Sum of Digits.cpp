#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, s, p;
    cin >> l >> s;
    vector<int>arr(10);

    if(l==1 && s==0)
        cout << "0 0\n";
    else if(s==0)
        cout << "-1 -1\n";
    else if(9*l<s)
        cout << "-1 -1\n";
    else
    {
        for(int i=9; i>=0; i--)
        {
            if(i==0)
            {
                arr[i]=l;
            }
            else
            {
                arr[i]=s/i;
                l-=(s/i);
                s%=i;
            }
        }

//        for(int i=9; i>=0; i--)
//        {
//            cout << arr[i] << " ";
//        }

        string mn, mx, fst, tmp;
        mn="";
        mx="";
        fst="";

        ///max
        for(int i=9; i>=0; i--)
        {
            p=arr[i];
            while(p>0)
            {
                tmp='0'+i;
                mx.append(tmp);
                p--;
            }
        }

        if(arr[0]>0)
        {
            for(int i=1; i<10; i++)
            {
                if(arr[i]>0)
                {
                    arr[i]--;
                    arr[i-1]++;
                    arr[0]--;
                    fst.append("1");
                    break;
                }
            }
        }

        mn.append(fst);


        for(int i=0; i<10; i++)
        {
            p=arr[i];
            while(p>0)
            {
                tmp='0'+i;
                mn.append(tmp);
                p--;
            }
        }

        cout << mn << " " << mx << "\n";
    }

    return 0;
}
