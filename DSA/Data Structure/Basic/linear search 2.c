 #include<stdio.h>
int main()
{
    int anum, num, fnum, cas, count, i, j, max, fmax=0;
    printf("Enter the number of the case :");
    scanf("%d",&cas);
    printf("\n");
    int  aray[100], pos[100][100];



    for(int j=0; j<cas; j++)
    {
        printf("\nCase %d.",j+1);
        printf("\n--------\n");
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
        pos[j][count]=0;
        max=fmax;
        for(int i=0; i<anum; i++)
        {

            if(aray[i]==fnum)
            {
                pos[j][count]=i+1;
                count++;
                pos[j][count]=0;
                if(count>max)
                    max=count;
            }
        }
        fmax=max;
        printf("\n");
    }
    printf("\n\n");

    /*for(int i=0; i<cas; i++)
    {
        printf("case %d :",i+1);
        if(count==0)
            printf("No");
        else
        {
            for(int j=0; j<count; j++)
            {
                printf("%d ",pos[j]);
            }
        }
        printf("\n");
    }*/

    for(j=0; j<cas; j++)
    {
        printf("Case %d : Position - ",j+1);
        for(i=0; i<=fmax; i++)
        {
            if(pos[j][i]==0 && i==0)
            {
                printf("Could not find!!!");
                break;
            }
            else if(pos[j][i]==0)
                break;
            else
                printf("(%d) ",pos[j][i]);
        }
        printf("\n");
    }
    return 0;
}
