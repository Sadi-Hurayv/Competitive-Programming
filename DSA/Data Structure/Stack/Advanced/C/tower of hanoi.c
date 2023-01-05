#include<stdio.h>

int towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if(n==1)
    {
        printf("Move disk 1 from %c to %c\n",from_rod,to_rod);
        return 0;
    }

    towerOfHanoi(n-1, from_rod,  aux_rod, to_rod);
    printf("Move disk %d from %c to %c\n",n,from_rod,to_rod);
    towerOfHanoi(n-1, aux_rod,  to_rod, from_rod);

}

int main()
{
    int N;
    scanf("%d",&N,printf("Enter the number of the disk : "));
    towerOfHanoi(N,'A','C','B');
    return 0;
}
