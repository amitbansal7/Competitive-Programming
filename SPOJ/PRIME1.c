#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
/*
	SPOJ - amitbansal7
	PRIME1 - Prime Generator
	status - accepted
*/
 
int primality(int n)
{
	if(n<=1)
		return false;
	
	else if(n<=3)
		return true;
 
	else if(n%2==0 || n%3==0)
		return false;
 
	int i=5;
	while(i*i<=n)
	{
		if(n % i ==0 ||n%(i+2)==0)
			return false;
 
		i = i+6;
	}
	return true;
 
}
 
 
int main()
{
	int s,n,i,t;
 
	scanf("%d",&t);
	while(t--)
	{
 
		scanf("%d %d",&s,&n);
 
		for(i=s;i<=n;i++)
		{
			if(i==1)
				continue;
			if(primality(i))
			printf("%d \n",i);
		}
	}
	printf("\n");
	return 0;
 
} 