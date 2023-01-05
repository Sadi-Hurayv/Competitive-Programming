#include<stdio.h>
int main()
{
    int a[3], b[3], ar=0, br=0;
    for(int i=0; i<6; i++)
    {
        if(i<3)
            scanf("%d",&a[i]);
        else
            scanf("%d",&b[i-3]);
    }
    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i])
            ar++;
        else if(b[i]>a[i])
            br++;
    }
    printf("%d %d",ar,br);
    return 0;
}
