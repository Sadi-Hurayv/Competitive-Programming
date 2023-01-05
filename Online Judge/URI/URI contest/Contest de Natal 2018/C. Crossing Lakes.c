#include<stdio.h>
int main()
{
    int l, i, j=0, f=0, c=0, F=0;
    char ch[11];
    scanf("%d",&l);
    for(i=0; i<l; i++)
    {
        scanf("%s",&ch);
        if(ch[0]=='.')
        {
            f=1;
            j++;
        }
        else
        {
            f=0;
            if(F==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            c++;
            if(c>1)
            {
                j--;
            }
            if(c>2)
            {
                F=1;
            }

        }
        else
        {
            c=0;
        }
    }
    if(F==1)
    {
        printf("N\n");
    }
    else
    {
        printf("%d\n",j);
    }
    return 0;
}
