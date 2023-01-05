#include<stdio.h>
int main()
{
    int anum, num, fnum, cas=0, count, i, j, k;
    int  aray[100], pos[100];
    char ans;

    while(printf("case %d :\n--------\n",++cas)!=EOF)
    {
        printf("Enter the number of the elements :");
        scanf("%d",&anum);
        printf("Enter the elements below.\n");

        for(int i=0; i<anum; i++)
        {
            scanf("%d",&aray[i]);
        }

        printf("Enter the number you want to find :" );
        scanf("%d",&fnum);

        count=0;
        for(int i=0; i<anum; i++)
        {
            if(aray[i]==fnum)
            {
                pos[count]=i+1;
                count++;
            }
        }

        printf("Position : ");
        if(count==0)
            printf("Could not find!!!");
        else
        {
            for(int j=0; j<count; j++)
            {
                printf("(%d) ",pos[j]);
            }
        }


        printf("\nIf you don't want to continue press 'E' and if want press 'C' : ");
        answer:
        fflush(stdin);
        scanf("%c",&ans);
        if(ans=='E' || ans=='e')
            break;
        else if(ans!='C' && ans!='c')
        {
            printf("Please enter the right character : ");
            goto answer;
        }

        printf("\n\n");

        /*printf("If you don't want to continue press 'E' or if don't press other character key : ");
        scanf("%c",&ans);
        //ans=getchar();
        if(ans=='E')
            break;*/
        /// Why i can't use "getchar()" or "scanf" for character ?????

    }
    printf("\n");
    return 0;
}

