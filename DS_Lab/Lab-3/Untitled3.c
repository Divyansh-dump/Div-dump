#include <stdio.h>
void main()
{
    int ar[5]= {7,5,6,77,9};
    int* ptr = ar;
    int** ptr2 = ptr;
    printf("1) Printing array: %d\n 2) Using pointer: %d\n 3) Using pointer to pointer: %p", ar[0], (*ptr), (*ptr2));
}
