#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;  // {}
    s.insert(2); // {2}
    s.insert(5); // {2, 5}
    s.insert(3); // {2, 3, 5}
    s.insert(2); // {2, 3, 5}

    cout << s.count(2) << endl; // outputs 1

    auto itr = s.begin(); // iterator of the first element
    s.erase(*itr);        // erases 2 for the set. {3, 5}

    cout << s.count(2) << endl; // outputs 0
    cout << s.size() << endl;   // outputs 2

    s.insert(100); // {3, 5, 100};
    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << ' '; // prints 3 5 100
    cout << endl;
   
    cout << s.size() << endl; // outputs 3
    
    auto it = s.end();
    it--;
    cout << *it << endl; // outputs 100
    s.erase(*it);        // {3, 5};
    
    return 0;
}