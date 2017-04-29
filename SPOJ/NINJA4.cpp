/* Amit Bansal - amitbansal7 */
#include <bits/stdc++.h>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1
#define INF 0x3f3f3f3f
#define TC(t) S(t); while(t--)
using namespace std;

int main()
{
	int t;
	lli n;

	TC(t)
	{
		Sl(n);

		int m = n%4;

		if(m== 0)
		{
			lli mul = n/4;
			lli x = mul * -2;
			printf("%lld %lld\n",x,x);

		}

		else if(m== 1)
		{
			lli mul = n/4;
			lli y = -2*mul;
			lli x = -(y) +1;
			printf("%lld %lld\n",x,y);
			
		}

		else if(m==2)
		{
			lli x = n/2;
			printf("%lld %lld\n",x,x+1);
		}

		else if(m==3)
		{
			lli mul = (n-3)/4;

			lli x = 2*(mul+1);
			printf("%lld %lld\n",-x,x);			
		}

	}
	return 0;
}