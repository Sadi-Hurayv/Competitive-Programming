#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, tmp, c;
    while(cin >> n >> k && (n!=0 && k!=0))
    {
        c=0;
        std::map<int, int>faq;

        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            faq[tmp]++;
        }
        std::map<int,int>::iterator it;
        for(it=faq.begin(); it!=faq.end(); ++it)
        {
            if(it->second >= k)
            {
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}
