#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

/// We have N box and M ball. Each ball is printed with Xi number and put the ball in Yi box.
/// Print the printed number of the ball of each box
///
/// INPUT
///     4 5
///     34 2
///     45 3
///     9 1
///     23 2
///     12 4


    int n, m;
    cin >> n >> m;

    vector< vector<int> >v(n);
    int x, y;
    for(int i=0; i<m; i++)
    {
        cin >> x >> y;
        v[y-1].push_back(x);
    }

    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}

