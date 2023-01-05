#include<stdio.h>
int main()
{
    int i, num1, num2, sum=0;
    scanf("%d",&num1);
    scanf("%d",&num2);

    if(num1>=num2)
    {
        for(i=num2+1; i<num1; i++)
        {
            if(i%2!=0)
                sum=sum+i;
        }
    }
    else
    {
        for(i=num1+1; i<num2; i++)
        {
            if(i%2!=0)
                sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
