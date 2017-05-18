/* Amit Bansal - @amitbansal7 */
#include <bits/stdc++.h>
#include <string>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1
#define INF 0x3f3f3f3f
#define TC int testcase; S(testcase); while(testcase--)
using namespace std;

int DP[101][101];
int A[101][101];
int r,c;

int solve(int i,int j)
{
	int q = A[i][j];

	if(DP[i][j] != NIL)
		return DP[i][j];

	else
	{
		int q = 0,a=0;

		if(i-1 >= 0)
		{
			if(j-1 >= 0)
			{
				q = max(q,A[i][j] + solve(i-1,j-1));
				q = max(q,A[i][j] + solve(i-1,j));
			}

			if(j==0)
				q = max(q,A[i][j] + solve(i-1,j));

			if(j+1 < c)
				a = max(q, a+ A[i][j] + solve(i-1,j+1));
		}

		DP[i][j] = max(a,q);

	}

	return DP[i][j];
}

int main()
{
	TC
	{
		S(r);S(c);

		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
			{
				S(A[i][j]);

				if(i==0)
					DP[i][j] = A[i][j];

				else
					DP[i][j] = NIL;
				
			}

		int ans[c];
		int max = INT_MIN;

		for(int i=0;i<c;i++)
		{
			ans[i] = solve(r-1,i);
			if(ans[i] > max)
				max = ans[i];
		}

		printf("%d\n",max);
	}	
}