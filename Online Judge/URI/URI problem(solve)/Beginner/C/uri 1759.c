#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    for(int i=0; i<n; i++)
    {
        if(i==n-1)
            printf("Ho!\n");
        else
            printf("Ho ");
    }
    return 0;
}
