#include<stdio.h>
int main()
{
    int i, j, stu;
    scanf("%d",&stu);
    long int id[stu], reg;
    float note[stu], max=0;
    for(i=0; i<stu; i++)
        scanf("%ld %f",&id[i],&note[i]);
    max=note[0];
    reg=id[0];
    for(i=1; i<stu; i++)
    {
        if(note[i]>max)
        {
            max=note[i];
            reg=id[i];
        }
    }
    if(max<8.0)
        printf("Minimum note not reached\n");
    else
        printf("%ld\n",reg);
    return 0;
}
