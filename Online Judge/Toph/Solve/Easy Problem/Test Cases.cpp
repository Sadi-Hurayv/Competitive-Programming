#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cl, ml, di, ct, me, f_res, res;

    cin >> t >> cl >> ml;
    res=0, f_res=0;
    for(int i=0; i<t; i++)
    {
        cin >> di >> ct >> me;

        ///for a single test case verdict
        if(f_res==0)
        {
            if(ct>cl)
                res=3;
            else if(me>ml)
                res=2;
            else if(di!=0)
                res=1;

            f_res=res;
        }
//        cout << f_res << endl;
    }
    /// for whole problem verdict
    if(f_res==3)
        cout << "CLE";
    else if(f_res==2)
        cout << "MLE";
    else if(f_res==1)
        cout << "WA";
    else if(f_res==0)
        cout << "AC";

    return 0;
}
