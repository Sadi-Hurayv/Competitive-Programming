#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t >> n;
    set <string> s_name;
    string name;
    for(int i=0; i<t; i++)
    {
        cin >> name;
        s_name.insert(name);
    }
    int k=1;
    for(const auto& j:s_name)
    {
        if(k==n)
        {
            cout << j << endl;
            break;
        }
        k++;
    }
    return 0;
}
