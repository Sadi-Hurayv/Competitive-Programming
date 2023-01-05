#include<stdio.h>
int main()
{
    int n, i, j, c;
    while(scanf("%d",&n)!=EOF)
    {
        c=0;
        int arr[n];
        double ran=(n*2)/(3*1.00);
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==1)
                c++;
        }
        if(c>=ran)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
    }
    return 0;
}
