#include<stdio.h>
int main()
{
    int mon, da, sum;
    while(scanf("%d %d",&mon,&da)!=EOF)
    {
        if(mon==12 && da==25)
            printf("E natal!\n");
        else if(mon==12 && da==24)
            printf("E vespera de natal!\n");
        else if(mon==12 && da>25)
                printf("Ja passou!\n");
        else
        {
            sum=0;
            switch(mon)
            {
                case 1:
                    sum+=31;
                case 2:
                    sum+=29;
                case 3:
                    sum+=31;
                case 4:
                    sum+=30;
                case 5:
                    sum+=31;
                case 6:
                    sum+=30;
                case 7:
                    sum+=31;
                case 8:
                    sum+=31;
                case 9:
                    sum+=30;
                case 10:
                    sum+=31;
                case 11:
                    sum+=30;
                case 12:
                    sum+=25;
            }
            printf("Faltam %d dias para o natal!\n",(sum-da));
        }
    }
    return 0;
}
