#include<stdio.h>
int main()
{
    char ch[120];
    long double n;
    scanf("%LE",&n);
    sprintf(ch,"%LE",n);
    if(ch[0]!='-')
        printf("+");
    printf("%.4LE\n",n);
    return 0;
}

/*{
    int i;
    double n, m;
    scanf("%lf",&n);
    if(n>=1 || n<=-1)
    {
        for(i=0; ;i++)
        {
            if((n<10 && n>=1) || (n>-10 && n<=-1))
                break;
             n=n/10.00;
        }
    }
    else if(n<1 && n>-1)
    {
        if(n!=0)
        {
            for(i=-1; ;i--)
            {
                n=n*10.00;
                if(n>=1 || n<=-1)
                    break;
            }
        }
        else
            i=0;
    }

    if(n<0)
        printf("%.4lf",n);
    else
        printf("+%.4lf",n);
    if(i<0)
        printf("E-%02d\n",-i);
    else
        printf("E+%02d\n",i);
    return 0;
}*/

