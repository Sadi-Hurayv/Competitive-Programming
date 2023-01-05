#include<stdio.h>
int main()
{
    int t, s, mul, sum, stp;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        mul=1;
        sum=0;
        stp=0;
        scanf("%d",&s);
        int arr[s];
        for(int j=0; j<s; j++)
        {
            scanf("%d",&arr[j]);
            if(arr[j]==0)
            {
                arr[j]=arr[j]+1;
                stp++;
            }
            sum=sum+arr[j];
        }
        if(sum==0)
        {
            stp++;
        }
        printf("%d\n",stp);
    }
    return 0;
}
