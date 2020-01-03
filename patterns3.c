#include<stdio.h>
int main()
{
	int rows,i,j;
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=rows;j>=1;j--)
		{
			if(j<=i)
			{

			printf("*");
		}else
			printf(" ");
		}
		printf("\n");
	}
}
