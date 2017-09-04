#include<stdio.h>
main()
    {
	int numbrs,count,i,j;
	float array[100];
	printf("enter the count of numbrs");
	scanf("%d",&count);
	for( numbrs=0 ; numbrs <= count ;++numbrs)
	{
	printf("enter the numbrs",numbrs);
	        scanf("%f",&array[numbrs]);
	    }
	    for(numbrs=1;numbrs<=count;++numbrs)
        {
		if(array[numbrs] > 53)
		{
		scanf("%d",&i);
		printf("number of elements greater than 53 are %d",i);
		i++;
        }
        else
        scanf("%d",&j);
        printf("number of elements lesser than 53 are %d",j);
        j++;
		}
     	}
	
	
