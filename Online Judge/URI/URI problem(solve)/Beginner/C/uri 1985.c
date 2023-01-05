#include<stdio.h>
int main()
{
    int id, t, qun;
    double pri, tprice=0;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {

        scanf("%d %d",&id,&qun);
        switch(id)
        {
            case 1001:
                pri=1.50;
                break;
            case 1002:
                pri=2.50;
                break;
            case 1003:
                pri=3.50;
                break;
            case 1004:
                pri=4.50;
                break;
            case 1005:
                pri=5.50;
                break;
        }
        tprice+=(pri*qun);

    }
    printf("%.2lf\n",tprice);
    return 0;
}
