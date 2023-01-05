#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, s, c=0;
    std::multiset< int, greater<int> >score;
    std::set<int>::iterator it;
    std::vector<int>fscore;


    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        score.insert(s);
    }

    fscore.assign(score.begin(),score.end());
    for(int i=0; i<n; i++)
    {
        c++;
        if(c==k)
        {
            for(int j=i+1; j<n; j++)
            {
                if(fscore[i]!=fscore[j])
                    break;
                c++;
            }
            break;
        }
    }

    cout << c << endl;
    return 0;
}

//it=score.begin();
//    if(k==n)
//    {
//        cout << k << endl;
//    }
//    else
//    {
//        std::advance(it,k-1);
//        int j=0;
//        while(k<n)
//        {
//            if(j==0)
//            {
//                tmp1=*it;
//                std::advance(it,1);
//                tmp2=*it;
//                if(tmp1!=tmp2)
//                {
//                    break;
//                }
//            }
//            else
//            {
//                tmp1=tmp2;
//                std::advance(it,1);
//                tmp2=*it;
//                if(tmp1!=tmp2)
//                {
//                    break;
//                }
//            }
//
//            k++;
//            j++;
//        }
//    }
//    cout << k << endl;
