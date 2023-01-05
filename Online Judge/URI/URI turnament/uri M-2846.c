
#include<stdio.h>
int main()
{
    int i, a, fib, c=0, num1=0, num2=1, re=1, f=0;

    scanf("%d",&a);
    for(i=1;c<a ;i++)
    {
        fib=num1+num2;
        num1=num2;
        num2=fib;
        while(re!=fib)
        {
            c++;
            if(c==a)
            {
                f=1;
                break;
            }
            re++;
        }
        if(f==1)
        {
            printf("%d\n",re);
            break;
        }
        re++;
    }
    return 0;

}
