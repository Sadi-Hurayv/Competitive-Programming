#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ///vector
    cout << "----VECTOR Print with iterator----\n";
    vector<int>v;

    for(int i=1; i<=8; i++)
        v.push_back((rand()%10)+1);

    for(auto it : v)
        cout << it << " ";
    cout << "\n";

//    vector<int>::iterator it;
//    for(it=v.begin(); it!=v.end(); it++)
//        cout << *it << " ";
//    cout << "\n";



    ///vector of pair
    cout << "\n----VECTOR OF PAIR Print with iterator----\n";
    vector< pair<int, int> > vp;

    for(int i=0; i<3; i++)
        vp.push_back({rand()%10+1,rand()%10+1}); ///vp.push_back({x,y});

    for(auto it : vp)
        cout << it.first << " " << it.second << " ";
    cout << "\n";

//    vector< pair<int, int> >::iterator it_vp;
//    for(it_vp=vp.begin(); it_vp!=vp.end(); it_vp++)
//        cout << (*it_vp).first << " " << (*it_vp).second << "\n";
////        cout << it_vp->first << " " << it_vp->second << "\n";
//    cout << "\n";



    ///vector of vector
    cout << "\n----VECTOR OF VECTOR print with iterator----\n";
    vector< vector<int> >vv;

    for(int i=0; i<3; i++)
    {
        vv.push_back(vector<int>());
        for(int j=0; j<4; j++)
            vv[i].push_back(rand()%10+1);
    }

    for(auto out_it : vv)
    {
        for(auto in_it : out_it)
            cout << in_it << " ";
        cout << "\n";
    }

//    vector< vector<int> >::iterator out_it;
//    vector<int>::iterator in_it;
//    for(out_it=vv.begin(); out_it!=vv.end(); out_it++)
//    {
//        for(in_it=(*out_it).begin(); in_it!=(*out_it).end(); in_it++)
//            cout << *in_it << " " ;
//        cout << "\n";
//    }

    return 0;
}

