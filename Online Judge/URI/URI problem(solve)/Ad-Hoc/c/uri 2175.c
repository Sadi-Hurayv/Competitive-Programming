#include<stdio.h>
int main()
{
    double o,b,i,min;
    scanf("%lf%lf%lf",&o,&b,&i);
    min=o;
    if(b<min)
        min=b;
    if(i<min)
        min=i;


    if((min==o && min==b) || (min==o && min==i) || (min==i && min==b))
        printf("Empate\n");
    else if(min==o)
        printf("Otavio\n");
    else if(min==b)
        printf("Bruno\n");
    else if(min==i)
        printf("Ian\n");


    return 0;
}
