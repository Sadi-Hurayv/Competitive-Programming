#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, tmp, c, base, target;
    while(cin >> n)
    {
        int start[n];
        int pos[n+1];
        for(int i=0; i<n; i++)
        {
            cin >> start[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            pos[tmp]=i+1;
        }

        c=0;
        for(int i=0; i<n-1; i++)
        {
            base=start[i];
            for(int j=i+1; j<n; j++)
            {
                target=start[j];
                if(pos[base]>pos[target])
                {
                    c++;
                }
            }
        }
        cout << c << endl;
    }

    return 0;
}
