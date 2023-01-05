#include<stdio.h>
int main()
{
    int t, d, i;
    float am;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%f",&am);
        d=0;
        while(am>1)
        {
            am=am/2;
            d++;
        }
        printf("%d dias\n",d);
    }
    return 0;
}
