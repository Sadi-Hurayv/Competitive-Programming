#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    std::vector<int>first(n);
    std::vector<int>sec(n);
    for(int i=0; i<n; i++)
    {
        cin >> first[i];
        sec[first[i]-1]=i+1;
    }
    for(int i=0; i<n; i++)
    {
        cout << sec[i] <<  " ";
    }
    cout << endl;

    return 0;
}
