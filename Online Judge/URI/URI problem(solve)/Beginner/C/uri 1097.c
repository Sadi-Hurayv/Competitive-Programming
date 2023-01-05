#include<stdio.h>
int main()
{
    int i, j, num, count;
    for(i=1,num=7; i<=9; i+=2,num+=2)
    {
        count=0;
        for(j=num; count<3;j--)
        {
            count++;
            printf("I=%d J=%d\n",i,j);
        }

    }
    return 0;
}


