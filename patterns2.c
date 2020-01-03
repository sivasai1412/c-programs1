#include<stdio.h>
int main()
{
	int i,j,rows;
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j<=i)
			
			printf("%d",j);
			else
			printf(" ");
		}
		for(j=rows;j>=1;j--)
		{
			if(j<=i)
			{
			printf("%d",j);	
			}
			else
			printf(" ");
		}
		printf("\n");
		
	}
}
