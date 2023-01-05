#include<stdio.h>
int fild(int x);
int main()
{
    int i, j, k, l, m, n, arr[15][15], o, p, q;
    for(m=0; ; m++)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0, k=1; i<n; i++, k*=2)
            for(j=0 , l=k; j<n; j++, l*=2)
                arr[i][j]=l;
        o=fild(arr[n-1][n-1]);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                p=fild(arr[i][j]);
                for(q=0; q<o-p; q++)
                    printf(" ");
                if(j==n-1)
                    printf("%d",arr[i][j]);
                else
                    printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

int fild(int x)
{
    int c=0;
    while(x!=0)
    {
        x=x/10;
        c++;
    }
    return c;
}
