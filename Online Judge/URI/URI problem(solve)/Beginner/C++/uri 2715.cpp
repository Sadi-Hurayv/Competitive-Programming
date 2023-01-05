#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin >> n)
    {
        long long int arr[n], pre_sum[n], dif=0, pre_dif=0, rev_sum=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(i==0)
            {
                pre_sum[i]=arr[i];
            }
            else
            {
                pre_sum[i]=pre_sum[i-1]+arr[i];
            }
        }

        if(n==1)
        {
            cout << arr[0] << endl;
        }
        else if(n==2)
        {
            dif=abs(arr[1]-arr[0]);
            cout << dif << endl;
        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                rev_sum+=arr[n-i-1];
                if(i>0)
                {
                    pre_dif=dif;
                    dif=abs(pre_sum[n-i-2]-rev_sum);
                    if(pre_dif<dif)
                    {
                        cout << pre_dif << endl;
                        break;
                    }

                    if(i==n-2)
                    {
                        cout << dif << endl;
                    }
                }
                else
                {
                    dif=abs(pre_sum[n-i-2]-rev_sum);
                }
            }
        }

    }

    return 0;
}
