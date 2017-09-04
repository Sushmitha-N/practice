#include<stdio.h>
int main()
{
    int val, nbr; /* val represents the input elements and nbr is number of elements*/
    int arr[100];

    printf("Enter total number of val: ");
    scanf("%d", &nbr);
    for(val= 0; val < nbr;val++)
    {
       printf("Enter Number %d: ", val+1);
       scanf("%d", &arr[val]);
    }
    for(val = 0; val < nbr; val++)
    {
       if(arr[0] <arr[val])
           arr[0] = arr[val];
    }
    printf("largest value = %d\n", arr[0]);

    return 0;
}
