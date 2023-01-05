#include<stdio.h>
int main()
{
    int i, num1, num2, swa;
    scanf("%d %d",&num1,&num2);
    if(num2>num1)
    {
        swa=num2;
        num2=num1;
        num1=swa;
    }
    for(i=num2+1; i<num1; i++)
    {
        if(i%5==3||i%5==2)
            printf("%d\n",i);
    }
    return 0;
}
