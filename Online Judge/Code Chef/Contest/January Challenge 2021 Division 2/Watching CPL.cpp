#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///***************NOT SOLVED****************
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<long long int> box(n);
        for(int i=0; i<n; i++)
        {
            cin >> box[i];
        }

        sort(box.begin(), box.end(), greater<long long int>());

        long long int i=0, cap1, cap2, b, cf1, cf2;
        cap1=cap2=k;
        b=0;
        cf1=0;
        cf2=1;

        while(i<n && (box[i]<=cap1 || box[i]<=cap2))
        {
            if(i<n && box[i]<=cap1)  //box[i]<=cap1 || cf2==0) && cap1>0
            {
                cap1-=box[i];
                //cf1=1;
                cout << "\n" << i << "-->" << cap1 << "-->" << box[i] << "\n\n";
                i++;
            }
            //cf2=0;
            if(i<n && box[i]<=cap2) //box[i]<=cap2 || cf1==0) && cap2>0
            {
                cap2-=box[i];
                //cf2=1;
                cout << "\n" << i << "-->" << cap2 << "-->" << box[i] << "\n\n";
                i++;
            }
            //cf1=0;
        }

        cout << "\n" << i << "\n";

        while(i<n && (cap1>0 || cap2>0))
        {
            if(cap1>cap2)
            {
                cap1-=box[i];
            }
            else
            {
                cap2-=box[i];
            }

            i++;
        }

        if(cap1<=0 && cap2<=0)
        {
            cout << i << "\n";
        }
        else
        {
            cout << "-1\n";
        }

    }
    return 0;
}
//2
//6 16
//8 7 6 5 4 2
//10 40
//14 3 7 8 9 7 12 15 10 6
