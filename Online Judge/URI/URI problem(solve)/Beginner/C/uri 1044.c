#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(m%n==0||n%m==0) printf("Sao Multiplos\n");
    else printf("Nao sao Multiplos\n");
    return 0;
}
