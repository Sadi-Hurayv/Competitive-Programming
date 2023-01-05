#include<stdio.h>
int main()
{
    int t, i, max, arr[500];
    while(scanf("%d",&t)!=EOF)
    {
        max=1;
        for(i=0; i<t; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>max)
                max=arr[i];
        }
        if(max<10)
            printf("1\n");
        else if(max>=10 && max<20)
            printf("2\n");
        else if(max>=20)
            printf("3\n");
    }
    return 0;
}
