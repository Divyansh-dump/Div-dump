#include <stdio.h>

//funcrion prototype
void Reverse (int*pstart, int*pend);

//main function
void main()
{
    //declaration and initialization
    int n,i;

    //reading the number of elements in array
    printf("Enter the number of values\n");
    scanf("%d", &n);

    //creating array of size n
    int ar[n];
    printf("Enter the elements of array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }

    //printing normal array
    printf("User array is: \n");
    for(i=0; i<n; i++){
        printf("%d\t", ar[i]);
    }

    //calling reverse function
    Reverse(ar,ar+n-1);

    //displaying reversed array
    printf("\nReversed array is: \n");
    for(i=0; i<n; i++){
        printf("%d\t", ar[i]);
    }


}

//creating a function Reverse
void Reverse(int*pstart, int*pend)
{
    for(;pstart<pend; pstart++, pend--)
    {
        int temp = *pstart;
        *pstart = *pend;
        *pend = temp;
    }
}
