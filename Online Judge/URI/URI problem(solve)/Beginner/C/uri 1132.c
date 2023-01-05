#include<stdio.h>
int main()
{
    int num1, num2, i, sum=0, swa;
    scanf("%d %d",&num1,&num2);
    if(num2>num1)
    {
        swa=num2;
        num2=num1;
        num1=swa;
    }
    for(i=num2; i<=num1; i++)
    {
        if(i%13!=0)
            sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
