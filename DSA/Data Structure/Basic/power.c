#include<stdio.h>
int main()
{
    int b=2, j;
    printf("j\t*\tb\n");
    for(j=1; j<100; )
    {
        printf("%d\t*\t%d\n",j,b);
        j=j*b;
    }
}
