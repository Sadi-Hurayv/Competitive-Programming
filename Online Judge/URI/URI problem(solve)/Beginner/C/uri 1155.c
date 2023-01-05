#include<stdio.h>
int main()
{
    int i;
    float sum=0;
    for(i=1; i<=100; i++)
    {
        sum+=1/(i*1.00);
    }
    printf("%.2f\n",sum);
    return 0;
}
