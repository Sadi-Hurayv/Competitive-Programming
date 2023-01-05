#include<stdio.h>
int main()
{
    int anum, fnum, c=0;
    int  aray[100] ,posi[100]={0};




    printf("Enter the number of the elements :");
    scanf("%d",&anum);

    printf("Enter the elements below.\n");

    for(int i=0; i<anum; i++)
    {
        scanf("%d",&aray[i]);
    }

    printf("Enter the number you want to find :" );
    scanf("%d",&fnum);

    c=linear_search(aray,fnum,anum,posi);
    printf("Position : ");
        if(c==0)
            printf("Could not find!!!");
        else
        {
            for(int j=0; j<c; j++)
            {
                printf("(%d) ",posi[j]);
            }
        }
        printf("\n\n");

    return 0;
}

int linear_search(int arr[],int find,int size,int pos[])
{
    int count=0;
    for(int i=0; i<size; i++)
        {
            if(arr[i]==find)
            {
                pos[count]=i+1;
                count++;
            }
        }
//        printf("Position : ");
//        if(count==0)
//            printf("Could not find!!!");
//        else
//        {
//            for(int j=0; j<count; j++)
//            {
//                printf("(%d) ",pos[j]);
//            }
//        }
//        printf("\n\n");
    return count;
}
