#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, sum, tmp, min;
    cin >> n >> s;
    sum=s;
    min=s;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        sum+=tmp;
        if(sum<min)
        {
            min=sum;
        }
    }
    cout << min << endl;

    return 0;
}
