#include<stdio.h>
int main()
{
    int n, o=0, z=0, tmp, i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&tmp);
        if(tmp==0)
            z++;
        else if(tmp==1)
            o++;
    }
    if(z>o)
        printf("Y\n");
    else
        printf("N\n");

    return 0;
}
