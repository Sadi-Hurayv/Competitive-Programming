#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    int num, rem;
}remender;

remender arr[10001];

bool cmp(remender a, remender b)
{
    if(a.rem==b.rem)
    {
        if(a.num%2==0 && b.num%2==0)
        {
            return a.num < b.num;
        }
        else if(a.num%2!=0 && b.num%2!=0)
        {
            return a.num > b.num;
        }
        else
        {
            if(a.num%2!=0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        return a.rem < b.rem;
    }
}

int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        cout << n << " " << m << endl;
        if(n==0 && m==0)
        {
            break;
        }
        for(int i=0; i<n; i++)
        {
            cin >> arr[i].num;
            arr[i].rem = arr[i].num%m;
        }

        stable_sort(arr, arr+n, cmp);
        for(int i=0; i<n; i++)
        {
            cout << arr[i].num << endl;
        }

    }

    return 0;
}
