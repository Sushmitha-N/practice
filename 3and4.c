#include <stdio.h>
main()
{
int nbr[100],i, multi3, multi4, counter3, counter4;
printf("Enter nbr:%d\n", nbr);
scanf("%d",&nbr);
counter3=0;counter4=0;multi3=0;
while(i<100)
{
scanf("%d",&i);
multi3=nbr[i]%3;
if(multi3=0)
{
counter3++;
}
else
{
counter4++;
}
i++;
}
scanf("%d",&counter3);
printf("Total nbr of multiplier of 3 in array is:%d\n", counter3);
scanf("%d",&counter4);
printf("Total nbr of multiplier of 4 in array is:%d\n", counter4);

}
