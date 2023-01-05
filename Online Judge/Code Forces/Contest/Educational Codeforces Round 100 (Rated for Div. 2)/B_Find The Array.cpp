#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, osum, esum;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        long int a[n];
        long int b[n];
        osum=esum=0;
        for(int j=0; j<n; j++)
        {
            cin >> a[j];
            if(j%2==0)
            {
                esum+=a[j];
            }
            else
            {
                osum+=a[j];
            }
        }


        for(int j=0; j<n; j++)
        {
            if(esum<=osum)
            {
                if(j%2==0)
                {
                    if(j==n-1)
                    {
                        cout << "1" << "\n";
                    }
                    else
                    {
                        cout << "1" << " ";
                    }
                }
                else
                {
                    if(j==n-1)
                    {
                        cout << a[j] << "\n";
                    }
                    else
                    {
                        cout << a[j] << " ";
                    }
                }
            }
            else
            {
                if(j%2==1)
                {
                    if(j==n-1)
                    {
                        cout << "1" << "\n";
                    }
                    else
                    {
                        cout << "1" << " ";
                    }
                }
                else
                {
                    if(j==n-1)
                    {
                        cout << a[j] << "\n";
                    }
                    else
                    {
                        cout << a[j] << " ";
                    }
                }
            }
        }


        ///Alternative Solution.......
//        for(int j=0; j<n; j++)
//        {
//            while(__builtin_popcount(a[j])>1)
//            {
//                a[j]&=a[j]-1;
//            }
//        }
//
//        for(int j=0; j<n; j++)
//        {
//            if(j==n-1)
//            {
//                cout << a[j] << "\n";
//            }
//            else
//            {
//                cout << a[j] << " ";
//            }
//        }


    }

    return 0;
}
