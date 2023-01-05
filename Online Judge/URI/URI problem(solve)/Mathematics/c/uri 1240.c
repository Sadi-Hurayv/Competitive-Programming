#include<stdio.h>
#include<math.h>
int main()
{
    long long int n1, n2, temp;
    int t, i, r1, r2, f;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld%lld",&n1,&n2);
        f=0;
        temp=n2;
        while(temp!=0)
        {
            temp=temp/10;
            f++;
        }
        if(n2==(n1%(int)(pow(10,f))))
        {
            printf("encaixa\n");
        }
        else
        {
            printf("nao encaixa\n");
        }
    }
    return 0;
}
