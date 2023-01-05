#include<stdio.h>
int main()
{
    int i, num1, num2;
    for(i=0; ; i++)
    {
        scanf("%d %d",&num1,&num2);
        if(num1==num2)
            break;
        else if(num1>num2)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
    }
    return 0;
}
