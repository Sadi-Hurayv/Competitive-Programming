#include<stdio.h>
int main()
{
    int t, i, j, c2=0, c3=0, c4=0, c5=0;
    scanf("%d",&t);
    int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            c2++;
        if(arr[i]%3==0)
            c3++;
        if(arr[i]%4==0)
            c4++;
        if(arr[i]%5==0)
            c5++;
    }
    printf("%d Multiplo(s) de 2\n",c2);
    printf("%d Multiplo(s) de 3\n",c3);
    printf("%d Multiplo(s) de 4\n",c4);
    printf("%d Multiplo(s) de 5\n",c5);

    return 0;
}
