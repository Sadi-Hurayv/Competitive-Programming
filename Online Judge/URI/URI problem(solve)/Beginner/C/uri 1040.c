#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,n5,av1;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    av1=((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    if(av1>=5&&av1<=6.9)
    {
        scanf("%f",&n5);
    }
    printf("Media: %.1f\n",av1);
    if(av1>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(av1>=5&&av1<=6.9)
    {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",n5);
        av1=(av1+n5)/2;
        if(av1>=5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",av1);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",av1);
        }

    }
    else if(av1<5)
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
