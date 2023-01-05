#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "----VECTOR----\n";
    vector<int>v; ///normal initallize
///    vector<int>v={1,2,3,4}; ///initialize with value
///    vector<int>v(3); ///size 10, all value 0 v={0,0,0}
///    vector<int>v(3, 5); ///size 3, all value 5 v={5,5,5}

    ///push back
    for(int i=1; i<=8; i++)
    {
        //cin >> v[i];
        v.push_back(i);
    }

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    ///at
    cout << "At 3 position: " << v.at(3) << "\n";

    ///pop back
    v.pop_back();
    v.pop_back();

    cout << "After pop_back: ";
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    ///insert
    v.insert(v.begin()+1, 7);

    cout << "After insert: ";
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    ///erase
    v.erase(v.begin()+2);

    cout << "After erase: ";
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";


    ///clear
    v.clear();
    cout << "After clear, is v empty: "<< v.empty() << "\n";


    ///vector of pair
    cout << "\n----VECTOR OF PAIR----\n";
    vector< pair<int, int> > vp;
//    vector< pair<int, int> > vp={{1,2},{3,4},{5,6}};

    int x, y;
    for(int i=0; i<3; i++)
    {
///      cin >> vp[i].first >> vp[i].second;
///      cin >> x >> y;
///      vp.push_back(make_pair(x,y));
        vp.push_back({rand()%10+1,rand()%10+1}); ///vp.push_back({x,y});
    }

    for(int i=0; i<vp.size(); i++)
        cout << vp[i].first << " " << vp[i].second << "\n";
    cout << "\n";



    ///arrry of vector
    cout << "\n----ARRAY OF VECTOR----\n";
    vector<int>av[3];
//    vector<int> av[3]={{1,2,4},{3,4,1},{5,6,7,3}};

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
///      cin >> av[i][j]
            av[i].push_back(rand()%10+1);
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<av[i].size(); j++)
            cout << av[i][j] << " " ;
        cout << "\n";
    }



    ///vector of vector
    cout << "\n----ARRAY OF VECTOR----\n";
    vector< vector<int> >vv;
//    vector<int> av[3]={{1,2,4},{3,4,1},{5,6,7,3}};

    for(int i=0; i<3; i++)
    {
        vv.push_back(vector<int>());
        for(int j=0; j<4; j++)
            vv[i].push_back(rand()%10+1);
    }

    for(int i=0; i<vv.size(); i++)
    {
        for(int j=0; j<vv[i].size(); j++)
            cout << vv[i][j] << " " ;
        cout << "\n";
    }

    return 0;
}
