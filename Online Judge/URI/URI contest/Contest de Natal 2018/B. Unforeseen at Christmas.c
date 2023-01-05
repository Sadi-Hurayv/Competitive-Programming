#include<stdio.h>
int main()
{
    int s, c, b, nc;
    scanf("%d %d %d %d",&s,&c,&b,&nc);
    if(c-(b+nc)>=s+1)
    {
        printf("Igor feliz!\n");
    }
    else
    {
        if(b>nc/2)
        {
            printf("Caio, a culpa eh sua!\n");
        }
        else
        {
            printf("Igor bolado!\n");
        }
    }

    return 0;
}
