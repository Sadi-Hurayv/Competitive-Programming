#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, a, temp;;
    cin >> n >> t;
    std::deque <int> s ,w;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        s.push_back(a);
        w.push_back(0);
    }

    for(int i=0; i<t; i++)
    {
        std::transform(s.begin(),s.end(),w.begin(),w.begin(),std::plus<int>());

        temp = s.back();
        s.pop_back();
        s.push_front(temp);

    }

    for (int i = 0; i < w.size(); ++i)
    {
        if(i==w.size()-1)
        {
            cout << w[i];
        }
        else
        {
            cout << w[i] << " ";
        }
    }
    cout << endl;
    return 0;
}


//int main()
//{
//    int n, t, a, temp;;
//    cin >> n >> t;
//    std::vector <int> s ,w;
//    for(int i=0; i<n; i++)
//    {
//        cin >> a;
//        s.push_back(a);
//        w.push_back(0);
//    }
//
//    for(int i=0; i<t; i++)
//    {
//        std::transform(s.begin(),s.end(),w.begin(),w.begin(),std::plus<int>());
//        temp = s.back();
//        s.pop_back();
//        s.insert(s.begin(),temp);
//
//    }
//
//    for (int i = 0; i < w.size(); ++i)
//    {
//        if(i==w.size()-1)
//        {
//            cout << w[i];
//        }
//        else
//        {
//            cout << w[i] << " ";
//        }
//    }
//    cout << endl;
//    return 0;
//}
