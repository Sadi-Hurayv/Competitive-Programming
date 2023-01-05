#include<bits/stdc++.h>
using namespace std;

bool available(std::vector<int> &p, int id, int n)
{
    if (id + n > p.size())
        return false;
    for (int i = 0; i < n; ++i)
    {
        if (p[id + i] != 0)
            return false;
    }
    return true;
}

void mark(std::vector<int> &p, int id, int n, int mark)
{
    for (int i = 0; i < n; ++i)
        p[id + i] = mark;
}

int main()
{
    int l, t;
    while(cin >> l >> t)
    {
        std::vector<int> park(l);
        long long int cost=0;
        for(int i=0; i<t; i++)
        {
            char op;
            int pn, s;
            cin >> op >> pn;
            if(op=='C')
            {
                cin >> s;
                for(int j=0; j<l; j++)
                {
                    if(available(park, j, s))
                    {
                        mark(park, j, s, pn);
                        cost+=10;
                        break;

                    }
                }
            }
            else
            {
                for(int j=0; j<l; j++)
                {
                    if(park[j]==pn)
                        park[j]=0;
                }
            }
        }
        cout << cost << endl;
    }

    return 0;
}
