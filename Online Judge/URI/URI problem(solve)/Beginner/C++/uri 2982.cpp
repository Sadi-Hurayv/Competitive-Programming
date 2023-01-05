#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, gov_sum=0, uni_sum=0;
    char ch;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> ch >> c;
        if(ch=='G')
        {
            uni_sum+=c;
        }
        else if(ch=='V')
        {
            gov_sum+=c;
        }

    }
    if(uni_sum<=gov_sum)
    {
        cout << "A greve vai parar." << endl;
    }
    else
    {
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
    }
    return 0;
}
