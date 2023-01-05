#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, dif;
    while((cin >> n >> b) && (n!=0 && b!=0))
    {
        int arr[b];
        std::set<int>s;
        for(int i=0; i<b; i++)
        {
            cin >> arr[i];
        }

        for(int i=0; i<b-1; i++)
        {
            for(int j=i+1; j<b; j++)
            {
                dif=abs(arr[i]-arr[j]);
                s.insert(dif);
            }
        }
        if(s.size()==n)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
    return 0;
}
