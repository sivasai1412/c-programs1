#include<stdio.h>
int main()
{
	int n,i,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=(c*10)+6;
		printf("%d",c);
		if(i<n)
		{
			printf("+");
		}
	}
}
