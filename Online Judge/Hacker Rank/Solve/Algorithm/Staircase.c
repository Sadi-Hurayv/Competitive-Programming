#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<s)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
        s--;
    }
    return 0;
}

