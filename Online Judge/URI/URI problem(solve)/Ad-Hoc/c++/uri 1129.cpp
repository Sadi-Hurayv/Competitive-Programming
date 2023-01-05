#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, p;
    int arr[5];
    char ans[5]={'A','B','C','D','E'};
    while(cin >> n && n!=0)
    {
        for(int i=0; i<n; i++)
        {
            c=0;
            p=-1;
            for(int j=0; j<5; j++)
            {
                cin >> arr[j];
                if(arr[j]<=127)
                {
                    c++;
                    p=j;
                }
            }
            if(c==1)
            {
                cout << ans[p] << endl;
            }
            else
            {
                cout << "*" << endl;
            }
        }
    }

    return 0;
}
