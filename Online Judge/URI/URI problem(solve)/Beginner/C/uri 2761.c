#include<stdio.h>

int main()
{
    int in, ch;
    float du;
    char str[51];
    scanf("%d %f %c %[^\n]s",&in,&du,&ch,&str);
//    scanf("%[^\n]s",&str);
    printf("%d%f%c%s\n",in,du,ch,str);
    printf("%d\t%f\t%c\t%s\n",in,du,ch,str);
    printf("%10d%10f%10c%10s\n",in,du,ch,str);


    return 0;
}
//uDebug is great you	should	try	it	out today andyes
