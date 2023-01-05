#include<stdio.h>
int main()
{
    float a,b,c,ar,per;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b)
    {
        per=a+b+c;
        printf("Perimetro = %.1f\n",per);
    }
    else
    {
        ar=c*((a+b)/2);
        printf("Area = %.1f\n",ar);
    }
    return 0;
}
