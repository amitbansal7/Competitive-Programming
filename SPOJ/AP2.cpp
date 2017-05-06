/* Amit Bansal - amitbansal7 */
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
#define Rep(n) for(int repr=0;repr<n;repr++)
#define Repi(i,n) for(int repr = i;repr<n;repr++)
using namespace std;

int main()
{	
	TC
	{
		lli t;
		lli lt;
		lli sn;

		Sl(t);Sl(lt);Sl(sn);

		lli n = (sn*2) /(t+lt);

		lli d = (lt-t)/(n-5);

		lli a = t - 2*d;

		printf("%lld\n",n);

		for(int i=1;i<=n;i++)
			printf("%lld ",a+(i-1)*d);

		printf("\n");
	}

	return 0;
}