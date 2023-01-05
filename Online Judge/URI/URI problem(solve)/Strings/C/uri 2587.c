#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j, p1, p2;
    char a[20], b[20], c[20];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s%s%s",&a,&b,&c);
        p1=p2=-1;
        for(j=0; j<strlen(c); j++)
        {
            if(c[j]=='_')
                if(p1==-1)
                    p1=j;
                else
                    p2=j;
        }
        if(a[p1]==b[p2] || a[p2]==b[p1])
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
