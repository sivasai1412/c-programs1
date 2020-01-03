#include<stdio.h>
int main()
{
	int i,n,n1,r,s=0,f;
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		r=n%10;
		f=1;
		for(i=1;i<=r;i++)
		{
	
			f=f*i;
		}
		s=s+f;
		n=n/10;
	}
	if(s==n1)
	{
		printf("strong");
	}
	else
	{
		printf("not strong");
	}
}
