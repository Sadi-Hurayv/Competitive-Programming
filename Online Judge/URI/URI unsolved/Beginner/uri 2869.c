#include<stdio.h>
int main()
{
    int i, j, k, L, n, c=0;
    scanf("%d",&L);
    for(i=0; i<L; i++)
    {
        scanf("%d",&n);
        for(j=1; ; j++)
        {
            c=0;
            for(k=1; k<=j; k++)
            {
                if(j%k==0)
                {
                    c++;
                }
            }
            if(c==n)
            {
                printf("%d",j);
                break;
            }
        }
    }
    return 0;
}
