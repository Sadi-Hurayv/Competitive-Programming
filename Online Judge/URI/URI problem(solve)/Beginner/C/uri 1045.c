#include<stdio.h>
int main()
{
    double A,B,C,arr[3],swa;
    int i,j;
    for(i=0;i<3;i++)
    {
        scanf("%lf",&arr[i]);
    }
    for(i=0; i<3-1; i++)
    {
        for(j=0; j<3-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swa=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swa;
            }
        }
    }
    A=arr[0];
    B=arr[1];
    C=arr[2];

    if(A>=B+C) printf("NAO FORMA TRIANGULO\n");
    else
    {
        if(A*A==B*B+C*C) printf("TRIANGULO RETANGULO\n");
        if(A*A>B*B+C*C) printf("TRIANGULO OBTUSANGULO\n");
        if(A*A<B*B+C*C) printf("TRIANGULO ACUTANGULO\n");
        if(A==B&&B==C) printf("TRIANGULO EQUILATERO\n");
        if(A==B&&B!=C||B==C&&C!=A||C==A&&A!=B) printf("TRIANGULO ISOSCELES\n");

    }

    return 0;


}
