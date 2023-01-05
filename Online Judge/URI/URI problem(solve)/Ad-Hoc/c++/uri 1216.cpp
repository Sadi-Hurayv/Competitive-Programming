#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int n, c=0;
    double avg, sum=0;
    while(getline(cin,s))
    {
        cin >> n;
        sum+=n;
        c++;
        cin.ignore();
    }
    avg=sum/(double)c;
    cout << setprecision(1) << fixed << avg << endl;
    return 0;
}
