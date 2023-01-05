#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tmp, x, y;
    while(cin >> n && n!=0)
    {
        x=0, y=0;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            if(tmp)
            {
                y++;
            }
            else
            {
                x++;
            }
        }
        cout << "Mary won " << x << " times and John won " << y <<" times" << endl;
    }

    return 0;
}
