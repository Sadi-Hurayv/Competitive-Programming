#include<stdio.h>
int main()
{
    int i, num=0, count=0, sum=0;
    float ave;
    for(i=0; ; i++)
    {
        sum+=num;
        scanf("%d",&num);
        if(num<0)
            break;
        count++;
    }
    ave=sum/(count*1.00);
    printf("%.2f\n",ave);
    return 0;
}
