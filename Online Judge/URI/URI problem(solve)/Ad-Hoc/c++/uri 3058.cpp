#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, g, tg;
    double p, tp, ppg, min_ppg;
    cin >> n;
    min_ppg=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin >> p >> g;
        ppg=p/(g*1.00);
        if(ppg<min_ppg)
        {
            min_ppg=ppg;
            tp=p;
            tg=g;
        }
    }

    cout << setprecision(2) << fixed << tp*(1000.00/tg) << endl;


    return 0;
}
