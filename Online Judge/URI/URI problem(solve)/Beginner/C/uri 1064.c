#include<stdio.h>
int main()
{
    float num[6], sum=0;
    int i, count=0;
    for(i=0; i<6; i++)
    {
       scanf("%f",&num[i]);
    }

    for(i=0; i<6; i++)
    {
        if(num[i]>0)
        {
            count++;
            sum+=num[i];
        }

    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",sum/count);
    return 0;
}

