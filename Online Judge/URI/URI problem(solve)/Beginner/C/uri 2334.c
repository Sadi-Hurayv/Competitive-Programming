#include<stdio.h>
int main()
{
    unsigned long long int n, i;
    for(i=0; ; i++)
    {
        scanf("%llu",&n);
        if(n==18446744073709551615)
            break;
        else if(n==0)
            printf("0\n");
        else
            printf("%llu\n",n-1);
    }

}
//18446744073709551615
