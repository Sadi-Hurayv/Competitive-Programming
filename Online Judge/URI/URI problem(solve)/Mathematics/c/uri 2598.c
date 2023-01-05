#include<stdio.h>
int main()
{
    long long int n, l, c, i, r;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld%lld",&l,&c);
        r=l/c;
        if(l%c>0)
            r++;
        printf("%d\n",r);

    }
    return 0;
}
