#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::set<int>boules;
    int tmp;
    for(int i=0; i<3; i++)
    {
        cin >> tmp;
        boules.insert(tmp);
    }
    std::set<int>::iterator it;
    int i;
    for(it=boules.begin(), i=0; ;i++, ++it)
    {
        if(i==1)
        {
            cout << *it << endl;
            break;
        }
    }

    return 0;
}
