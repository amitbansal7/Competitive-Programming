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
#define TC int t; S(t); while(t--)
#define Rep(n) for(int repr=0;repr<n;repr++)
#define Repi(i,n) for(int repr = i;repr<n;repr++)
using namespace std;

struct Job
{
	int s, e, m;
};
bool compare(Job a, Job b)
{
	return a.e < b.e;
}

bool overlap(Job a, Job b)
{
	if (b.e <= a.s)
		return 0;
	else
		return 1;
}
int main()
{
	TC
	{
		int n;
		S(n);
		int S[n]; int E[n]; int M[n];
		struct Job Jobs[n];
		int a;
		for (int i = 0; i < n; i++)
		{
			S(a); Jobs[i].s = a;
			S(a); Jobs[i].e = a + Jobs[i].s;
			S(a); Jobs[i].m = a;
		}

		sort(Jobs, Jobs + n, compare);
		int profit[n];

		for (int i = 0; i < n; i++)
			profit[i] = Jobs[i].m;

		for (int i = 1; i < n; i++)
			for (int j = 0; j < i; j++)
				if (!overlap(Jobs[i], Jobs[j]))
					profit[i] = max(profit[i], profit[j] + Jobs[i].m);

		int maxp = INT_MIN;
		for (int i = 0; i < n; i++)
			if (maxp < profit[i])
				maxp = profit[i];

		printf("%d\n", maxp);

	}

	return 0;
}
