#include<stdio.h>
int main()
{
	int rows,i,j,k,s=1;
	scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
   	for(k=s;k<=rows;k++)
   	{
   		printf(" ");
	   }
	   for(j=0;j<i;j++)
	   {
	   	printf("*");
	   }
	   s++;
	   printf("\n");
	
   }
   //lower part
 //  s=1;
	for(i=rows-1;i>=1;i--)
	{
		for(k=s;k>=0;k--)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		s++;
		printf("\n");
	}
}
