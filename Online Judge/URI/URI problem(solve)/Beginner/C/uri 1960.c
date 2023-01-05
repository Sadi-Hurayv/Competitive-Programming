#include<stdio.h>
int print(int n, int m);
int main()
{
    int I, V, X, L, C, D, p;
    scanf("%d",&p);
    D=p/500;
    p=p%500;
    C=p/100;
    p=p%100;
    L=p/50;
    p=p%50;
    X=p/10;
    p=p%10;
    V=p/5;
    p=p%5;
    I=p;

    if(C==4)
    {
        if(D==0)
            printf("CD");
        else if(D==1)
            printf("CM");
    }
    else if(C<4)
    {
        print(D,500);
        print(C,100);
    }
    if(X==4)
    {
        if(L==0)
            printf("XL");
        else if(L==1)
            printf("XC");
    }
    else if(X<4)
    {
        print(L,50);
        print(X,10);
    }
    if(I==4)
    {
        if(V==0)
            printf("IV");
        else if(V==1)
            printf("IX");
    }
    else if(I<4)
    {
        print(V,5);
        print(I,1);
    }
    printf("\n");

    return 0;
}
int print(int n, int m)
{
    for(int j=0; j<n; j++)
    {
        if(m==500)
            printf("D");
        else if(m==100)
            printf("C");
        else if(m==50)
            printf("L");
        else if(m==10)
            printf("X");
        else if(m==5)
            printf("V");
        else if(m==1)
            printf("I");
    }
    return 0;
}
