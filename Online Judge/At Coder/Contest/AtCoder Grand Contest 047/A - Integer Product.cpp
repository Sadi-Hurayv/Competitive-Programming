#include<bits/stdc++.h>
#include<gmon.h>
using namespace std;
int main()
{
    int n, tmp, c=0;
    cin >> n;
    double a;
    std::vector<double>num(n);

    for(int i=0; i<n; i++)
    {
        cin >> num[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            a=((double)num[i]*(double)num[j]);
            tmp=(int)(a);

            if(tmp==a)
            {
                c++;
            }

            cout <<  "MAIN: " << num[i] << "*" << num[j] << " = " <<  (a) << " --- " << "TMP: " << tmp << "-- c = " << c << endl;
            cout << fixed << setprecision(9) << num[i] << endl;
            cout << fixed << setprecision(9) << num[j] << endl;
            cout << fixed << setprecision(12) << a << endl;
        }
    }

    cout << c << endl;

    return 0;
}
