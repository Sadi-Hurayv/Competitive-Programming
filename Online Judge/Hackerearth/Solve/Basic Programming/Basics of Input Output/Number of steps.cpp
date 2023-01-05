#include<iostream>
#define INT_MAX 2e9
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mn=INT_MAX;

    cin >> n;
    int a[n], b[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]<mn)
            mn=a[i];
    }

    for(int i=0; i<n; i++)
        cin >> b[i];

    int c=0;
    for(int i=0; i<n; i++)
    {
        while(a[i]>mn)
        {
            a[i]-=b[i];
            c++;
        }

        if(a[i]<0)
            break;
        if(a[i]<mn)
        {
            mn=a[i];
            i=-1;
        }
    }

    int f=1;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
            f=0;
    }

    if(f)
        cout << c ;
    else
        cout << "-1";

    return 0;
}
