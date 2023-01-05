#include<stdio.h>
int main()
{
    int car, c, sum;
    unsigned long long int n1, n2, v1, v2;
    for(; ;)
    {
        c=0;
        car=0;

        scanf("%lld%lld",&n1,&n2);
        if(n1==0 && n2==0)
        {
            break;
        }

        for(; ;)
        {
            sum=0;
            v1=n1%10;
            v2=n2%10;
            n1=n1/10;
            n2=n2/10;

            sum=v1+v2+car;

            if(sum>=10)
            {
                car=1;
                c++;
            }
            else
            {
                car=0;
            }
            if(n1==0 && n2==0)
            {
                break;
            }
        }
        if(c==0)
        {
            printf("No carry operation.\n");
        }
        else if(c==1)
        {
            printf("%d carry operation.\n",c);
        }
        else
        {
             printf("%d carry operations.\n",c);
        }

    }
    return 0;
}

//        sprintf(ch1,"%lld",n1);
//        sprintf(ch2,"%lld",n2);
//        l1=strlen(ch1)-1;
//        l2=strlen(ch2)-1;

//            if((i<0 && car==0) || (j<0 && car==0))
//            {
//                break;
//            }
//            sum=0;
//            if(i<0)
//            {
//                v1=0;
//            }
//            else
//            {
//                v1=ch1[i]-'0';
//            }
//
//            if(j<0)
//            {
//                v2=0;
//            }
//            else
//            {
//                v2=ch2[j]-'0';
//            }
