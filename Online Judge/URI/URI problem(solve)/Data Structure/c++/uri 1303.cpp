#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    int np=0, p_rs=0, p_sc=0, r_n;
}bsktball;



bool cmp(bsktball a, bsktball b)
{
    double avg_bskt_a=(double)a.p_sc/(double)a.p_rs;
    double avg_bskt_b=(double)b.p_sc/(double)b.p_rs;
    if(a.np==b.np)
    {
        if(avg_bskt_a==avg_bskt_b)
        {
            if(a.p_sc==b.p_sc)
            {
                return a.r_n>b.r_n;
            }
            else
            {
                return a.p_sc>b.p_sc;
            }
        }
        else
        {
            return avg_bskt_a>avg_bskt_b;
        }
    }
    else
    {
        return a.np>b.np;
    }
}

int main()
{
    int n, k=0;
    int u, us, v, vs;
    while(cin >> n && n!=0)
    {
        bsktball arr[105];
        if(k>0)
        {
            cout << endl;
        }
        k++;

        for(int i=0; i<((n*(n-1))/2); i++)
        {
            cin >> u >> us >> v >> vs;

            ///point received
            if(us>vs)
            {
                arr[u-1].np+=2;
                arr[v-1].np+=1;
            }
            else
            {
                arr[u-1].np+=1;
                arr[v-1].np+=2;
            }

            ///point scored
            arr[u-1].p_sc+=us;
            arr[v-1].p_sc+=vs;

            ///point received
            arr[u-1].p_rs+=vs;
            arr[v-1].p_rs+=us;

            ///registered number
            arr[u-1].r_n=u;
            arr[v-1].r_n=v;

        }

        stable_sort(arr, arr+n, cmp);

        cout << "Instancia " << k << endl;
        for(int i=0; i<n; i++)
        {
            if(i==n-1)
            {
                cout << arr[i].r_n << endl;
            }
            else
            {
                cout << arr[i].r_n << " ";
            }
        }

    }

    return 0;
}
