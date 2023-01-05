#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ckg;
    double cost, tcost, ctkg;
    string frut;
    char ch;
    cin >> n;

    ctkg=0;
    tcost=0;
    for(int i=0; i<n; i++)
    {
        cin >> cost;
        tcost+=cost;
        cin.ignore();
        getline(cin,frut);
        ckg=1;
        for(int j=0; j<frut.length(); j++)
        {
            if(frut[j]==' ')
            {
                ckg++;
            }
        }
        ctkg+=ckg;
        cout << "day " << i+1 << ": " << ckg << " kg" << endl;
    }
    cout << setprecision(2) << fixed << ctkg/(double)n << " kg by day" << endl;
    cout << "R$ " << setprecision(2) << fixed << tcost/(double)n << " by day" << endl;

    return 0;
}
