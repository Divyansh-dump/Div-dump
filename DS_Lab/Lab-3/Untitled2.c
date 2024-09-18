#include <stdio.h>

//function prototype
int smallest(int* pstart,int* pend,int psmall);

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

    //calling small function
    int small = ar[0];
    small = smallest(&ar[0], &ar[n-1], small);

    //printing the smallest value
    printf("\nThe smallest element is %d\n", small);
}

//creating a function smallest
int smallest(int* pstart,int* pend,int psmall)
{
    for(;pstart<pend;pstart++)
    {
        if(psmall>(*pstart))
            psmall = *pstart;
    }
    return psmall;
}



