#include<stdio.h>
int main()
{
	int rows,i,j,k=1;
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			printf("%d ",k);
			k=k+1;
		}
		printf("\n");
	}
	
}
