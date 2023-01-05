#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    int f1, f2, f3;
    f1=2*(a2*1+a3*2);
    f2=2*(a1*1+a3*1);
    f3=2*(a1*2+a2*1);

    std::set<int>time;
    std::set<int>::iterator it;

    time.insert(f1);
    time.insert(f2);
    time.insert(f3);
    it=time.begin();

    cout << *it << endl;
    return 0;
}
