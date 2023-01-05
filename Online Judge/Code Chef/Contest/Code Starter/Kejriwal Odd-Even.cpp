#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, tmp, esum, osum;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        esum=0;
        osum=0;
        cin >> tmp;
        while(tmp)
        {
            if((tmp%10)%2==0)
                esum+=tmp%10;
            else
                osum+=(tmp%10);

            tmp=tmp/10;
        }
        //cout << esum << "--" << osum << "\n";
        if(esum%4==0 || osum%3==0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        if(i!=n-1)
        {
            cout << " ";
        }
    }
    cout << "\n";


    return 0;
}
