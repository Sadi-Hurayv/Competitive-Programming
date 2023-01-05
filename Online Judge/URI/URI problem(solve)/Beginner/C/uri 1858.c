#include<stdio.h>
int main()
{
    int n, t[100], i, pos, min;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&t[i]);
    min=t[0];
    pos=1;
    for(i=1; i<n; i++)
    {
        if(t[i]<min)
        {
            min=t[i];
            pos=i+1;
        }
    }
    printf("%d\n",pos);
    return 0;
}
