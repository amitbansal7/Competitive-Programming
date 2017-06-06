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
#define Pi 3.14159
using namespace std;

lli DP[2][10001];
lli A[10001];
lli solve(int lh,int i)
{
	if(DP[lh][i] != -1)
		return DP[lh][i];

	if(i < 1)
		DP[lh][i] = 0;

	else if(lh)
		DP[lh][i] = solve(0,i-1);

	else if(!lh)
		DP[lh][i] = max(A[i-1] + solve(1,i-1),solve(0,i-1));

	return DP[lh][i];
}

int main()
{
	int test;
	S(test);
	for(int t = 0 ;t<test;t++)
	{
		int n;
		S(n);
		Mset(DP,-1);
		for(int i=0;i<n;i++)
			Sl(A[i]);

		printf("Case %d: %lld\n",t+1,solve(0,n));
	}
	return 0;
}
