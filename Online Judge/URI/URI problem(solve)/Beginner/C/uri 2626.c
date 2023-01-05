#include <stdio.h>
#include <string.h>
int main()
{
    char p1[10], p2[10], p3[10];
    while(scanf("%s%s%s",p1,p2,p3)!=EOF)
    {
        //printf("%s  %s  %s\n",p1, p2, p3);

        int v1, v2, v3;
        v1=getvalue(p1);
        v2=getvalue(p2);
        v3=getvalue(p3);

        //printf("%d  %d  %d\n",v1, v2, v3);


        if((v1==1 && v2==3 && v3==3) || (v1==2 && v2==1 && v3==1) || (v1==3 && v2==2 && v3==2))
        {
            ///1 win
            printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
        }
        else if((v2==1 && v1==3 && v3==3) || (v2==2 && v1==1 && v3==1) || (v2==3 && v1==2 && v3==2))
        {
            ///2 win
            printf("Iron Maiden\'s gonna get you, no matter how far!\n");
        }
        else if((v3==1 && v2==3 && v1==3) || (v3==2 && v2==1 && v1==1) || (v3==3 && v2==2 && v1==2))
        {
            ///3 win
            printf("Urano perdeu algo muito precioso...\n");
        }
        else
        {
            ///drawn
            printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }

    }
}

int getvalue(char p[])
{
    if(strcmp(p,"pedra")==0)
    {
        return 1;
    }
    else if(strcmp(p,"papel")==0)
    {
        return 2;
    }
    if(strcmp(p,"tesoura")==0)
    {
        return 3;
    }
}
