#include <stdio.h>
#include <math.h>
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n;
    printf("Enter the number of rings you want to shift:\n");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B');
    printf("Number of steps: %d", (int)(pow(2,n))-1);
    return 0;
}
