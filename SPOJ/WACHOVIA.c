#include <stdio.h>
#include <stdlib.h>

// username - amitbansal7 
//WACHOVIA - Wachovia Bank

int max(int a,int b)
{
	return (a>b)?a:b;
}

int knapsack(int v[],int w[],int c,int n)
{
	 int K[n+1][c+1];

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=c;j++)
		{
			if(i==0 || j==0)
				K[i][j] = 0;

			else if(w[i-1] <= j)
				K[i][j] = max(v[i-1] + K[i-1][j - w[i-1]], K[i-1][j]);
				

			else 
				K[i][j] = K[i-1][j];
				
		}
	}

	return K[n][c];
}



int main()
{
	int n,c,t,i;

	scanf("%d",&t);

	while(t--)
	{
		scanf("%d %d",&c,&n);

		int *v = (int *)malloc(sizeof(int)*n);
		int *w = (int *)malloc(sizeof(int)*n);

		for(int i=0;i<n;i++)
			scanf("%d %d",&w[i],&v[i]);

		printf("Hey stupid robber, you can get %d.\n",knapsack(v,w,c,n));

	}
	
	return 0;
}