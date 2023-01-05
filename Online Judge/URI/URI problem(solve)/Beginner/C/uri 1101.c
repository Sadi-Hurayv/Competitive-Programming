#include<stdio.h>
int main()
{
    int i, j, num1, num2, sum, temp;
    for(i=0; ; i++)
    {
        scanf("%d %d",&num1,&num2);
        if((num1<=0) ||(num2<=0))
            break;
        sum=0;
        if(num1>num2)
        {
            temp=num2;
            num2=num1;
            num1=temp;
        }
        for(j=num1; j<=num2; j++)
        {
            sum+=j;
            printf("%d ",j);
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
