#include<stdio.h>
int main()
{
    int num, i, count=0;
    scanf("%d",&num);
    for(i=num; count<6; i++)
    {
        if(i%2!=0)
        {
            count++;
            printf("%d\n",i);
        }
    }
    return 0;
}
