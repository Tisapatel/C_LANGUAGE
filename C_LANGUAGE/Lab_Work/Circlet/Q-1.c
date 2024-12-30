#include<stdio.h>
main()
{
	int i,j;
	for(i=41;i<=45;i++) //rows
	{
		for(j=41;j<=i;j++) //columns
		{
			printf(" %d",j);
		}
		printf("\n");
	}
}
