#include<stdio.h>
int main()
{
    int L,n2, i, c=0;
    scanf("%d",&L);
    for(i=0; i<L; i++)
    {
        scanf("%d",&n2);
        if(n2!=1)
        {
            c++;
        }

    }
    printf("%d\n",c);
    return 0;
}
