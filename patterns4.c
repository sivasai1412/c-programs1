#include<stdio.h>
int main()
{
	int rows,i,j,k,s=1;
	scanf("%d",&rows);
	for(i=rows;i>=1;--i)
	{
		for(k=s;k>=0;k--)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("*");
			//printf(" ");
		}
		s++;
		printf("\n");
	}
}
