#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, tmp;
    std::map<int,int>m;
    cin >> n;


    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        m[tmp]++;
    }

//    for(int i=0; i<n; i++)
//    {
//        m[arr[i]]++;
//    }

    std::map<int,int>::iterator it;
    for(it=m.begin(); it!=m.end(); ++it)
    {
        cout << it->first << " aparece " << it->second << " vez(es)" << endl;
    }

    return 0;
}
