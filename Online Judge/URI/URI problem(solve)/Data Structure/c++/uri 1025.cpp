#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, qur, pos, cas;
    cas=1;
    while(cin >> n >> q, (n!=0 || q!=0))
    {
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        cout << "CASE# " << cas << ":" << endl;
        cas++;
        for(int j=1; j<=q; j++)
        {
            pos=-1;
            cin >> qur;
            for(int k=0; k<n; k++)
            {
                if(arr[k]==qur)
                {
                    pos=k+1;
                    break;
                }
            }
            if(pos==-1)
            {
                cout << qur << " not found" << endl;
            }
            else
            {
                cout << qur << " found at " << pos << endl;
            }

        }
    }
    return 0;
}
