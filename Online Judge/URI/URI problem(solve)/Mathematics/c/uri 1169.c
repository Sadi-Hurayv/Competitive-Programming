#include<stdio.h>
#include<math.h>
int main()
{
    int t, n, i;
    unsigned long long int re;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        re=(pow(2,n)-1)/12000.00;
        printf("%lld kg\n",re);
    }
    return 0;
}
