#include<stdio.h>
int main()
{
    int i, j, k, l, m, t;
    for(i=0; ; i++)
    {
        scanf("%d",&t);
        if(t==0)
            break;
        int arr[t][t];
        if(t%2==0)
            l=t/2;
        else
            l=(t+1)/2;
        for(j=0; j<t; j++)
        {
            m=0;
            for(k=0; k<t; k++)
            {
                if(j<l)
                {
                    if(k<=j)
                        m++;
                    else if(k>=(t-j))
                        m--;
                }
                else
                {
                    if(j<k)
                        m--;
                    else if(j<(t-k))
                        m++;
                }
                arr[j][k]=m;
            }
        }
        for(j=0; j<t; j++)
        {
            for(k=0; k<t; k++)
            {
                if(k==t-1)
                    printf("%3d",arr[j][k]);
                else
                    printf("%3d ",arr[j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
