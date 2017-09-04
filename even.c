#include<stdio.h>
main()
{
    int ar[100],i,n; /* array of 100 elements, i stores the elements of array,n is the size*/
   printf("Enter the size of the array \n");
    scanf("%d",&n);
    printf("Enter the elements of the array \n");
    for(i=0; i<n; i++)
    {
    scanf("%d",&ar[i]);
    } 
    printf("Even numbers in the array are - ");
   for(i=0;i<n;i++)
     {
      if(ar[i]%2==0)
{
        printf("%d \n",ar[i]);
    }
}      

     printf("\n Odd numbers in the array are ");

     for(i=0;i<n;i++)

     {

           if(ar[i]%2!=0)

           {

                 printf("%d \n",ar[i]);

           }

     }
}

