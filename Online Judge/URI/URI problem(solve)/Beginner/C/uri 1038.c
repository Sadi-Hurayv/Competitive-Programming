#include<stdio.h>
int main()
{
    int c,a;
    float p;
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        scanf("%d",&a);
        p=a*4.00;
        printf("Total: R$ %.2f\n",p);
        break;
    case 2:
        scanf("%d",&a);
        p=a*4.50;
        printf("Total: R$ %.2f\n",p);
        break;
    case 3:
        scanf("%d",&a);
        p=a*5.00;
        printf("Total: R$ %.2f\n",p);
        break;
    case 4:
        scanf("%d",&a);
        p=a*2.00;
        printf("Total: R$ %.2f\n",p);
        break;
    case 5:
        scanf("%d",&a);
        p=a*1.50;
        printf("Total: R$ %.2f\n",p);
        break;
    }
    return 0;
}
