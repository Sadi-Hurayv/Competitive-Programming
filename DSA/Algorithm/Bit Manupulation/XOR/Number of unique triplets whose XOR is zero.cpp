#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    int n, c;
    cin >> n;

    vector<int> v(n);
    set<int> st;
    for (int i = 0; i < n; i++)
        cin >> v[i], st.insert(v[i]);

    c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int XOR = (v[i] ^ v[j]);
            if (st.find(XOR) != st.end() && XOR != v[i] && XOR != v[j])
                c++;
        }
    }

    /*
        count/3 as we only want unique triplets. Since i-n and j+1-n give us unique pairs
        but not triplets, we do a count/3 to remove the other two possible combinations.
        
        Input : a[] = {1, 3, 5, 10, 14, 15};
        Output : 2
        Explanation : {1, 14, 15} and {5, 10, 15} are the
                    unique triplets whose XOR is 0.
                    {1, 14, 15} and all other combinations of
                    1, 14, 15 are considered as 1 only.
    */
    int ans = c / 3;
    cout << ans << endl;

    return 0;
}