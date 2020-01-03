#include<stdio.h>
int main()
{
	int rows,i,j,k,x;
	scanf("%d",&rows);
	x=rows-1;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=x;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",i);
			printf(" ");
		}
		
		printf("\n");
		x=x-1;
	}
}
