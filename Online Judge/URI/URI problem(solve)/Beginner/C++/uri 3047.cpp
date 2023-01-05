#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mo, c1, c2, c3;
    std::set<int, greater<int> >age;
    cin >> mo >> c1 >> c2;
    c3=mo-(c1+c2);
    age.insert(c1);
    age.insert(c2);
    age.insert(c3);

    std::set<int>::iterator it = age.begin();
    cout << *it << endl;

    return 0;
}
