#include<stdio.h>
int main()
{
    int num, max=0;
    while(scanf("%d",&num) && num!=0)
    {
        if(num>=max)
        {
            max=num;
        }
    }
    printf("%d\n",max);
    return 0;
}
