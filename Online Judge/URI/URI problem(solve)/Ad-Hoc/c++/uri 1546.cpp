#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, tmp;
    std::map<int,string>fb={
        {1,"Rolien"},
        {2,"Naej"},
        {3,"Elehcim"},
        {4,"Odranoel"}
        };

    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> tmp;
            std::map<int,string>::iterator it;
            it=fb.find(tmp);
            cout << it->second << endl;
        }
    }

    return 0;
}
