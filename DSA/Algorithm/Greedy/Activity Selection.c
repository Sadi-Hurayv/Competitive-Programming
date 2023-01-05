#include<stdio.h>

int main()
{
    int n=6;
    int start[6]={1, 3, 0, 5, 8, 5};
    int finish[6]={2, 4, 6, 7, 9, 9};

    ActivitySelection(start, finish, n);
    return 0;
}

void ActivitySelection(int start[], int finish[], int n)
{
    int i, j;
    printf ("The selected activities are : ");
    i=0;
    printf("%d ",i);
    for(j=1; j<n; j++)
    {
      if(start[j]>=finish[i])
      {
          printf("%d ",j);
          i=j;
      }
    }
}


