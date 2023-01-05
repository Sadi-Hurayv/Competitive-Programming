#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j, c;
    scanf("%d",&n);
//    char ch[(n*6)];
    int num[n];
//    ch[0]='\0';
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<n; i++)
    {
        c=0;
        if(i==(n-1))
        {
            printf("*\n");
        }
        else
        {
            for(j=i+1; j<n; j++)
            {
                if(num[j]>num[i])
                {
                    printf("%d ",num[j]);

                    break;
                }
                else
                {
                    c++;
                }

            }
            if(c==(n-1)-i)
            {
                printf("* ");
            }
        }
    }
//    for(i=0; i<n; i++)
//    {
//        c=0;
//        if(i==(n-1))
//        {
//            ans[i]=0;
//        }
//        else
//        {
//            for(j=i+1; j<n; j++)
//            {
//                if(num[j]>num[i])
//                {
//                    ans[i]=num[j];
//
//                    break;
//                }
//                else
//                {
//                    c++;
//                }
//
//            }
//            if(c==(n-1)-i)
//            {
//                ans[i]=0;
//            }
//        }
//    }
//    for(i=0; i<n; i++)
//    {
//        c=0;
//        char temp[5]={'\0'};
//        if(i==(n-1))
//        {
//            strcat(ch,"*");
//        }
//        else
//        {
//            for(j=i+1; j<n; j++)
//            {
//                if(num[j]>num[i])
//                {
//                    sprintf(temp,"%d ",num[j]);
//                    strcat(ch,temp);
//
//                    break;
//                }
//                else
//                {
//                    c++;
//                }
//
//            }
//            if(c==(n-1)-i)
//            {
//                strcat(ch,"* ");
//            }
//        }
//    }
//    printf("%s\n",ch);
//    for(i=0; i<n; i++)
//    {
//        if(i==n-1)
//        {
//            printf("*\n");
//        }
//        else
//        {
//            if(ans[i]==0)
//                printf("* ");
//            else
//                printf("%d ",ans[i]);
//        }
//    }

    return 0;
}
