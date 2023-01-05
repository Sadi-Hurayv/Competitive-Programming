#include<stdio.h>
int main()
{
    int cho, num1, num2, ce, ac;
    scanf("%d %d %d %d %d",&cho,&num1,&num2,&ce,&ac);
    if(ce==ac && ce==1)
        printf("Jogador 2 ganha!\n");
    else if(ce!=ac && ce==0 && ac==1)
        printf("Jogador 1 ganha!\n");
    else if(ce!=ac && ce==1 && ac==0)
        printf("Jogador 1 ganha!\n");
    else if(ce==ac && ce==0)
    {
        if((cho==0 && (num1+num2)%2!=0) || (cho==1 && (num1+num2)%2==0))
            printf("Jogador 1 ganha!\n");
        else
            printf("Jogador 2 ganha!\n");
//        else if((cho==0 && (num1+num2)%2==0) || (cho==1 && (num1+num2)%2!=0))
//            printf("Jogador 2 ganha!\n");
    }
    return 0;
}
