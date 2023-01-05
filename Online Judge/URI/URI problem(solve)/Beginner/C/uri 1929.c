#include<stdio.h>
int main()
{
    int n1, n2, n3, n4, c=0;
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    if(n1+n2>n3 && n2+n3>n1 && n3+n1>n2)
        c++;
    else if(n1+n2>n4 && n2+n4>n1 && n4+n1>n2)
        c++;
    else if(n1+n3>n4 && n3+n4>n1 && n4+n1>n3)
        c++;
    else if(n2+n3>n4 && n3+n4>n2 && n4+n2>n3)
        c++;
    if(c==0)
        printf("N\n");
    else if(c>0)
        printf("S\n");
    return 0;
}
