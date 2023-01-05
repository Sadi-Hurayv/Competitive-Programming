#include<stdio.h>
int main()
{
    int am,amu,n100,n50,n20,n10,n5,n2,n1;
    scanf("%d",&am);
    amu=am;
    n100=am/100;
    am=am%100;
    n50=am/50;
    am=am%50;
    n20=am/20;
    am=am%20;
    n10=am/10;
    am=am%10;
    n5=am/5;
    am=am%5;
    n2=am/2;
    am=am%2;
    n1=am/1;
    printf("%d\n",amu);
    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",n1);
    return 0;
}
