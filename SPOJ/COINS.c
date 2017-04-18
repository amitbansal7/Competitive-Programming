#include <stdio.h>
#include <stdlib.h>

// amitbansal7

int A[1000000];

void memoize()
{
	A[0] = 0;
	A[1] = 1;
	A[2] = 2;
	A[3] = 3;
	A[4] = 4;

	long long int t;
	int i;
	for(i=5;i<=1000000;i++)
	{
		t = A[i/2] + A[i/3] + A[i/4];

		if(t > i)
			A[i] = t;

		else
			A[i] = i;
	}

}

long long int Coins(int n)
{
	if(n <= 1000000)
		return A[n];

	else 
	{
		long long int t = Coins(n/2) + Coins(n/3) + Coins(n/4);

		if(t > n)
			return t;

		else
			return n;
	}
}

int main()
{
	int n;
	memoize();
	
	while((scanf("%d",&n) )!=EOF)
	{
		printf("%lld\n",Coins(n));
	}
	
	return 0;
}