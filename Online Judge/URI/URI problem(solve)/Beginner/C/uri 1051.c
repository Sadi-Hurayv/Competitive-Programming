#include<stdio.h>
int main()
{
    float sal, tax;
    scanf("%f",&sal);
    if(sal>4500.00)
    {
        tax=.08*1000+.18*1500+(sal-4500)*.28;
        printf("R$ %.2f\n",tax);
    }
    else if(sal>3000.00)
    {
        tax=.08*1000+(sal-3000)*.18;
        printf("R$ %.2f\n",tax);
    }
    else if(sal>2000.00)
    {
        tax=(sal-2000)*.08;
        printf("R$ %.2f\n",tax);
    }
    else
        printf("Isento\n");
    return 0;
}
