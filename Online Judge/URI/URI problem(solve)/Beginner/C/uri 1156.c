#include<stdio.h>
int main()
{
    int i, j;
    float sum=1;
    for(i=3,j=2; i<=39; i+=2,j=(j*2))
    {
        sum+=i/(j*1.00);
    }
    printf("%.2f\n",sum);
    return 0;
}
