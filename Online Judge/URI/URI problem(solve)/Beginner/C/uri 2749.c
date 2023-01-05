#include<stdio.h>
int main()
{
    int i, j, d=-1, o=-1, h=-1;
    for(j=0; j<20; j++)
    {
        for(i=0; i<39; i++)
        {
            if(j==0 || j==2 || j==19)
            {
                printf("-");
            }
            else
            {
                if(i==0 || i==12 || i==22 || i==38)
                {
                    printf("|");
                }
                else
                {
                    if(j==1)
                    {
                        if(i==3)
                        {
                            printf("decimal");
                        }
                        else if(i==15)
                        {
                            printf("octal");
                        }
                        else if(i==25)
                        {
                            printf("Hexadecimal");
                        }
                        else if(i<3 || (i>9 && i<15) || (i>19 && i<25) || i>35)
                        {
                            printf(" ");
                        }
                    }
                    else if(j>=3 && j<=18)
                    {
                        if(i==6)
                        {
                            d++;
                            if(d<10)
                            {
                                printf(" %d",d);
                            }
                            else
                            {
                                printf("%d",d);
                            }
                        }
                        else if(i==16)
                        {
                            o++;
                            if(o==8)
                            {
                                o=10;
                            }

                            if(o<10)
                            {
                                printf(" %d",o);
                            }
                            else
                            {
                                printf("%d",o);
                            }
                        }
                        else if(i==30)
                        {
                            h++;
                            if(h<10)
                            {
                                printf("%d",h);
                            }
                            else
                            {
                                printf("%c",h+55);
                            }

                        }
                        else if(i<6 || (i>7 && i<16) || (i>17 && i<30) || i>30)
                        {
                            printf(" ");
                        }
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
