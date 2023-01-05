#include<stdio.h>
int main()
{
    char ch[101];
    int i=0, j=0;
    scanf("%[^\n]",&ch);
    while(ch[i]!='\0')
    {
        if(ch[i]==',')
        {
            j++;
            if(j==1)
            {
                printf("\n");
            }
            else
            {
                printf(",");
            }

        }
        else
        {
            printf("%c",ch[i]);
        }

        i++;
    }
    printf("\n");
    return 0;
}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char frase[101];
//    int i = 0, f = 0;
//    while( scanf("%[^\n]",&frase) != NULL )
//    {
//        for( i = 0 ; i < strlen(frase) ; i++ )
//        {
//            if( frase[i] != ',' )
//                printf("%c",frase[i]);
//            else
//            {
//                f++;
//                if(f==1)
//                    printf("\n");
//                else
//                    printf("%c",frase[i]);
//            }
//        }
//        printf("\n");
//   }
//   return 0;
//
//}
