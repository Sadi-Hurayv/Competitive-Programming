#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        int px, py, x, y;
        cin >> px >> py;
        for(int i=0; i<n; i++)
        {
            cin >> x >> y;
            if(x==px || y==py)
            {
                cout << "divisa" << endl;
            }
            else if(x>px)
            {
                if(y>py)
                {
                    cout << "NE" << endl;
                }
                else if(y<py)
                {
                    cout << "SE" << endl;
                }
            }
            else if(x<px)
            {
                if(y>py)
                {
                    cout << "NO" << endl;
                }
                else if(y<py)
                {
                    cout << "SO" << endl;
                }
            }
        }
    }
    return 0;
}
