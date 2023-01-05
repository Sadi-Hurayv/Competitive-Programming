#include<stdio.h>
int main()
{
    int i, h[10], c=0;
    unsigned long long int n;
    scanf("%lld",&n);
    for(i=0; n!=0; i++)
    {
        h[i]=n%16;
        n=n/16;
        c++;
    }
    for(i=c-1; i>=0; i--)
    {
        if(h[i]==10)
            printf("A");
        else if(h[i]==11)
            printf("B");
        else if(h[i]==12)
            printf("C");
        else if(h[i]==13)
            printf("D");
        else if(h[i]==14)
            printf("E");
        else if(h[i]==15)
            printf("F");
        else
            printf("%d",h[i]);
    }
    printf("\n");
    return 0;
}
