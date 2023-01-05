#include<stdio.h>
int main()
{
    int cv,cd,cgd,fv,fd,fgd;
    int c,f;
    scanf("%d%d%d%d%d%d",&cv,&cd,&cgd,&fv,&fd,&fgd);
    c=cv*3+cd;
    f=fv*3+fd;
    if(c>f)
    {
        printf("C\n");
    }
    else if(f>c)
    {
        printf("F\n");
    }
    else
    {
        if(cgd>fgd)
        {
            printf("C\n");
        }
        else if(fgd>cgd)
        {
            printf("F\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}
