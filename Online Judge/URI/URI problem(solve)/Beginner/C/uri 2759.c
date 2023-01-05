#include<stdio.h>
int main()
{
    char c1, c2, c3;
    scanf("%c %c %c",&c1,&c2,&c3);
    printf("A = %c, B = %c, C = %c\n",c1,c2,c3);
    printf("A = %c, B = %c, C = %c\n",c2,c3,c1);
    printf("A = %c, B = %c, C = %c\n",c3,c1,c2);
    return 0;
}
