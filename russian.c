#include<stdio.h>
int main()
{
	int n,n1,s=0;
	scanf("%d %d",&n,&n1);
	while(n>=1)
	{
			if(n%2!=0)
		{
			s=s+n1;
		}
		n=n/2;
		n1=n1*2;
	
	}
	printf("%d",s);
}
