#include <bits/stdc++.h>
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

class FibonacciDiv2
{
	public:

	int DP[1000];

	int fib(int n)
	{
		if(DP[n] != NIL)
			return DP[n];
		return DP[n] = fib(n-1) + fib(n-2);
	}
	int find(int N)
	{
		memset(DP,-1,sizeof(DP));
		DP[0] = 0;
		DP[1] = 1;
		fib(31);
		int i;
		for(i=0;i<=31;i++)
		if(N < DP[i])
			break;

		else if(DP[i] == N)
			return 0;

		int a = DP[i] - N;
		int b = N - DP[i-1];

		return min(a,b);

	}
};

