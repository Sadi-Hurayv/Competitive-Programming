#include<stdio.h>
int main()
{
    int i, tnum;
    scanf("%d",&tnum);
    float num1, num2, num3, sum=0, wave[tnum];
    for(i=0; i<tnum; i++)
    {
        scanf("%f%f%f",&num1,&num2,&num3);
        wave[i]=(((num1*2)+(num2*3)+(num3*5))/(2+3+5));
    }
    for(i=0; i<tnum; i++)
    {
        printf("%.1f\n",wave[i]);
    }

    return 0;
}
