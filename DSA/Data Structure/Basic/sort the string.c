#include<stdio.h>
#include<string.h>
int main()
{
    char chracter[100];
    printf("Input a string : ");
    gets(chracter);
    passing_string(chracter);
    printf("Sort form of the string : ");
    puts(chracter);
}
void passing_string(char ch[])
{
    int i, j, flag;
    char swap;
    for(i=0; i<strlen(ch)-1; i++)
    {
        for(j=0; j<strlen(ch)-1-i; j++)
        {
            if(ch[j]>ch[j+1])
            {
                swap=ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=swap;
            }
        }
    }

}

