#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string tmp;
    while(cin >> n)
    {
        std::set<string>book;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            book.insert(tmp);
        }
        std::set<string>::iterator it;
        for(it=book.begin(); it!=book.end(); ++it)
        {
            cout << *it << endl;
        }
    }

    return 0;
}
