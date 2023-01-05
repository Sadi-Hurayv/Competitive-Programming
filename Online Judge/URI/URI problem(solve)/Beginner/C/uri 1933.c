#include<stdio.h>
int main()
{
    int n1, n2;
    scanf("%d %d",&n1,&n2);
    if(n1==n2)
        printf("%d\n",n1);
    else if(n1>n2)
        printf("%d\n",n1);
    else if(n2>n1)
        printf("%d\n",n2);
    return 0;
}
