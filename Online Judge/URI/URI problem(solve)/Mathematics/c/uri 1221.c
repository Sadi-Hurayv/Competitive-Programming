#include<stdio.h>
#include<math.h>
int main()
{
    int i, j, t, tr;
    long int n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        tr=0;
        scanf("%ld",&n);
        if(n==0 || n==1)
        {
            printf("Not Prime\n");
            continue;
        }
        if(n==2)
        {
            printf("Prime\n");
            continue;
        }
        for(j=2; j<sqrt(n)+1; j++)
        {
            if(n%j==0)
            {
                tr++;
            }
            if(tr==2)
                break;
        }
        if(tr==0)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Not Prime\n");
        }
    }
    return 0;
}
