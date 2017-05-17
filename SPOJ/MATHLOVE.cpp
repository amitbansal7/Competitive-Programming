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
#define Rep(n) for(int repr=0;repr<n;repr++)
#define Repi(i,n) for(int repr = i;repr<n;repr++)
#define Pi 3.14159
using namespace std;

int main()
{

	TC
	{
		llu n;
		Sl(n);

		lli x;
		double d;

		d = 1 - 4*(2 * -n);

		d = sqrt(d);

		if(ceil(d) == d || floor(d) == d)
		{
			x = (-1 + d)/2;

			printf("%lld\n",x);
		}

		else
			printf("NAI\n");
	}
	
}