#include<stdio.h>
int main()
{
    char ch1[101], ch2[101], ch3[101];
    scanf("%[^\n] %[^\n] %[^\n]",&ch1,&ch2,&ch3);
    printf("%s%s%s\n",ch1,ch2,ch3);
    printf("%s%s%s\n",ch2,ch3,ch1);
    printf("%s%s%s\n",ch3,ch1,ch2);
    printf("%.10s%.10s%.10s\n",ch1,ch2,ch3);

    return 0;
}
