#include<stdio.h>
int main()
{
    double i,j;
    int count, temp;
    for(i=0,count=0; i<=2; i+=0.20)
    {
        for(j=1; j<=3; j++)
        {
            if(count==0)
            {
                //temp=i;
                //i=temp;
                printf("I=%.0lf J=%.0lf\n",i,i+j);
                //printf("%d\n",temp);
            }
            else
                printf("I=%.1lf J=%.1lf\n",i,i+j);
        }
        count++;
        if(count==5)
            count=0;

    }
    return 0;
}
