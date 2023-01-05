#include<stdio.h>
int main()
{
    int t1, t2, i, j, sum, c;
    double ave;
    scanf("%d",&t1);
    for(i=0; i<t1; i++)
    {
        scanf("%d",&t2);
        sum=0;
        c=0;
        int arr[t2];
        for(j=0; j<t2; j++)
        {
            scanf("%d",&arr[j]);
            sum=sum+arr[j];
        }
        ave=sum/(t2*1.00);
        for(j=0; j<t2; j++)
        {
            if(arr[j]>ave)
                c++;
        }
        printf("%.3lf%%\n",(c/(t2*1.00))*100.00);
    }
    return 0;
}
