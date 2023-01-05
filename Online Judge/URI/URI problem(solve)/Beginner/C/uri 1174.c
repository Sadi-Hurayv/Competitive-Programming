#include<stdio.h>
int main()
{
    int i, j, c=0, t[100];
    float a[100], r[100];
    for(i=0; i<100; i++)
    {
        scanf("%f",&a[i]);
        if(a[i]<=10)
        {
            t[c]=i;
            r[c]=a[i];
            c++;
        }
    }
    for(i=0; i<c; i++)
    {
        printf("A[%d] = %.1f\n",t[i],r[i]);
    }
    return 0;
}
