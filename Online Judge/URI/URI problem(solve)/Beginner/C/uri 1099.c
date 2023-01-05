#include<stdio.h>
int main()
{
    int tnum, i, j, num1, num2, sum;
    scanf("%d",&tnum);
    int arr[tnum];
    for(i=0; i<tnum; i++)
    {
        sum=0;
        scanf("%d %d",&num1,&num2);
        if(num1>num2)
        {
            for(j=num2+1; j<num1; j++)
            {
                if(j%2!=0)
                    sum+=j;
            }
            arr[i]=sum;
        }
        else
        {
        for(j=num1+1; j<num2; j++)
            {
                if(j%2!=0)
                    sum+=j;
            }
            arr[i]=sum;
        }
    }
    for(i=0; i<tnum; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
