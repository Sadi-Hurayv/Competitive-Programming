#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        if(a==b && b==c)
        {
            printf("Valido-Equilatero\n");
        }

        else if(a==b || b==c || c==a)
        {
            printf("Valido-Isoceles\n");
        }
        else
        {
            printf("Valido-Escaleno\n");
        }

        if((a*a+b*b==c*c) || (b*b+c*c==a*a) || (c*c+a*a==b*b))
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");
    }
    else
        printf("Invalido\n");

    return 0;
}
