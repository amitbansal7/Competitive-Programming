/* Amit Bansal - amitbansal7 */
#include <bits/stdc++.h>
#include <stdlib.h>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1
#define INF 0x3f3f3f3f
#define TC int testcase; S(testcase); while(testcase--)
#define pi 3.1415
using namespace std;

int main()
{	
	int c,n;
	S(c);S(n);

	int w[n+1];
	int v[n+1];

	for(int i=0;i<n;i++)
	{
		S(w[i]);S(v[i]);
	}

	int DP[n+1][c+1];

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=c;j++)
		{
			if(!i || !j)
				DP[i][j] = 0;

			else if(w[i-1] > j)
				DP[i][j] = DP[i-1][j];

			else
				DP[i][j] = max(v[i-1] + DP[i-1][j-w[i-1]],DP[i-1][j]);
		}
	}

	printf("%d\n",DP[n][c]);
	return 0;
}