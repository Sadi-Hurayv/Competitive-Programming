#include<stdio.h>
int main()
{
    double t,c_01;
    int n100,n50,n20,n10,n5,n2,c1,c_50,c_25,c_10,c_05;
    scanf("%lf",&t);
    n100=t/100;
    t=t-(n100*100);
    n50=t/50;
    t=t-(n50*50);
    n20=t/20;
    t=t-(n20*20);
    n10=t/10;
    t=t-(n10*10);
    n5=t/5;
    t=t-(n5*5);
    n2=t/2;
    t=t-(n2*2);
    c1=t/1;
    t=t-(c1*1);
    c_50=t/.50;
    t=t-(c_50*.50);
    c_25=t/.25;
    t=t-(c_25*.25);
    c_10=t/.10;
    t=t-(c_10*.10);
    c_05=t/.05;
    t=t-(c_05*.05);
    c_01=t/.01;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",c1);
    printf("%d moeda(s) de R$ 0.50\n",c_50);
    printf("%d moeda(s) de R$ 0.25\n",c_25);
    printf("%d moeda(s) de R$ 0.10\n",c_10);
    printf("%d moeda(s) de R$ 0.05\n",c_05);
    printf("%.0lf moeda(s) de R$ 0.01\n",c_01);

    return 0;
}
