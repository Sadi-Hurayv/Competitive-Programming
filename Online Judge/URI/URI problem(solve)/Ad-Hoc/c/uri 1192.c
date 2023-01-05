#include<stdio.h>
int main()
{
    int n,i;
    int a,c;
    char b;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {

        scanf("%d%c%d",&a,&b,&c);
        if(a==c)
        {
            printf("%d\n",a*c);
        }
        else
        {
            if(97<=b && b<=122)
            {
                printf("%d\n",a+c);
            }
            else if(65<=b && b<=90)
            {
                printf("%d\n",c-a);
            }
        }
    }

    return 0;
}

