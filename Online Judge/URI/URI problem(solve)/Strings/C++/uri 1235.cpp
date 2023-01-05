#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        std::string s;
        std::vector<char>v;
        getline(cin,s);
        v.assign(s.begin(),s.end());
        int hf=(s.size()/2)-1;
        for(int j=hf; j>=0; j--)
        {
            cout << v[j];
        }
        for(int j=s.size()-1; j>hf; j--)
        {
            cout << v[j];
        }
        cout << endl;
    }
    return 0;
}
