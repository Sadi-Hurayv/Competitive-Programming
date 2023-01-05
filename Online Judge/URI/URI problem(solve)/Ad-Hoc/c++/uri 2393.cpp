#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, xi, xf, yi, yf, c;
    std::vector< vector<int> > area(101, vector<int>(101, 0));
    cin >> n;
    c=0;
    for(int k=0; k<n; k++)
    {
        cin >> xi >> xf >> yi >> yf;
        for(int i=xi; i<xf; i++)
        {
            for(int j=yi; j<yf; j++)
            {
                if(!area[i][j])
                {
                    area[i][j]=1;
                    c++;
                }
            }
        }
    }

    cout << c << endl;

    return 0;
}
