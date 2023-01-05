#include<stdio.h>
int main()
{
    float s,ts,ea;
    int pa;
    scanf("%f",&s);
    if(s>=0&&s<=400)
    {
        pa=15;
        ea=s*(pa/100.00);
        ts=s+ea;
        printf("Novo salario: %.2f\n",ts);
        printf("Reajuste ganho: %.2f\n",ea);
        printf("Em percentual: %d %c\n",pa,37);

    }
    else if(s>400&&s<=800)
    {
        pa=12;
        ea=s*(pa/100.00);
        ts=s+ea;
        printf("Novo salario: %.2f\n",ts);
        printf("Reajuste ganho: %.2f\n",ea);
        printf("Em percentual: %d %c\n",pa,37);

    }
    else if(s>800&&s<=1200)
    {
        pa=10;
        ea=s*(pa/100.00);
        ts=s+ea;
        printf("Novo salario: %.2f\n",ts);
        printf("Reajuste ganho: %.2f\n",ea);
        printf("Em percentual: %d %c\n",pa,37);

    }
    else if(s>1200&&s<=2000)
    {
        pa=7;
        ea=s*(pa/100.00);
        ts=s+ea;
        printf("Novo salario: %.2f\n",ts);
        printf("Reajuste ganho: %.2f\n",ea);
        printf("Em percentual: %d %c\n",pa,37);

    }
    else if(s>2000)
    {
        pa=4;
        ea=s*(pa/100.00);
        ts=s+ea;
        printf("Novo salario: %.2f\n",ts);
        printf("Reajuste ganho: %.2f\n",ea);
        printf("Em percentual: %d %c\n",pa,37);

    }

    return 0;
}
