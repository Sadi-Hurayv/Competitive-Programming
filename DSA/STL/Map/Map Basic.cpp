#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp1;
    map<int, pair<int, int>> mp2;
    // if value for a key is not assigned, default value of valueType will be assigned
    // for integers it is 0, for pair<int, int> it is {0, 0}
    cout << mp1[0] << "\n";                               // 0
    cout << mp2[0].first << " " << mp2[0].second << "\n"; // 0 0

    map<int, int> mp3 = {{1, 2}, {3, 4}, {5, 6}};
    cout << mp3[1] << " " << mp3[3] << " " << mp3[5] << "\n"; // 2 4 6

    map<pair<int, int>, int> mp4;
    mp4[{4, 5}] = -1;
    mp4[{1, 3}] = -2;
    cout << mp4[{1, 3}] << " " << mp4[{4, 5}] << "\n"; //-1 -2
    // each element of map is a {key, value} pair
    // and they are sorted
    for (pair<pair<int, int>, int> p : mp4)
        cout << p.first.first << " " << p.first.second << " " << p.second << "\n";
    /*
    1 3 -2
    4 5 -1
    */

    map<int, int> mp5;
    cout << mp1.size() << " " << mp2.size() << " " << mp3.size() << " " << mp4.size() << " " << mp5.size() << "\n"; // 1 1 3 2 0

    map<int, int> mp;
    if (mp.find(0) == mp.end())
        cout << "not found\n";
    else
        cout << "found\n";
    // not found
    mp[0] = 1;
    if (mp.find(0) == mp.end())
        cout << "not found\n";
    else
        cout << "found\n";
    // found

    return 0;
}