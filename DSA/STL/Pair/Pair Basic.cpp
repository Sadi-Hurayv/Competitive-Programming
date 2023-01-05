#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair<int, int> p1;
    p1={1,2};
    cout << p1.first << " " << p1.second << "\n";

    pair<int, int> p2;
    p2=make_pair(3,4);
    cout << p2.first << " " << p2.second << "\n";

    pair<int, int> p3;
    cin >> p3.first >> p3.second;
    cout << p3.first << " " << p3.second << "\n";

    pair<int, pair<int, int> > p4;
    p4={7,{8,9}};
    cout << p4.first << " " << p4.second.first << " " << p4.second.second << "\n";

    /// In comparing the pair the elements are compared lexographically.
    /// Compare the first element then second then third or forth if any
    make_pair(1, 1) == make_pair(1, 1); //true
    make_pair(1, 2) < make_pair(1, 3); //true
    make_pair(1, 2) < make_pair(1, 1); //false

    return 0;
}
