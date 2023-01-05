#include<bits/stdc++.h>
using namespace std;

typedef struct vote
{
    long long int a, t;
}vote;

bool compare(vote x, vote y)
{
    return x.t>y.t;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, sum_a, sum_t, va, vb;
    sum_a=sum_t=0;

    cin >> n;

    vote arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> va >> vb;
        sum_a+=va;

        arr[i].a=va;
        arr[i].t=va+vb;
    }

    sort(arr, arr+n, compare);

    int c=0;
    int f=0;
    for(int i=0; i<n; i++)
    {
        sum_t+=arr[i].t;
        sum_a-=arr[i].a;
        c++;
        if(sum_t>sum_a)
        {
            f=1;
            break;
        }
    }

    if(f)
    {
        cout << c << "\n";
    }
    return 0;
}
