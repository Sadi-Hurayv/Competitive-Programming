#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i=1;
    while(cin >> n && n!=-1)
    {
        cout << "Experiment " << i <<": " << n/2 <<" full cycle(s)" << endl;
        i++;
    }

    return 0;
}
