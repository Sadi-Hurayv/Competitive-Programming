#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tmp, sum=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        sum+=tmp;
        if(sum%(i+1)==0)
        {
            cout << sum/(i+1) << endl;
        }
        else
        {
            cout << fixed << setprecision(10) << (double)sum/(double)(i+1) << endl;
        }

    }

    return 0;
}
