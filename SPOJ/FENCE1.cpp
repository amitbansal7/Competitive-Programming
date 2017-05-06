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
#define pi 3.14159
#define TC int testcase; S(testcase); while(testcase--)
#define Rep(n) for(int repr=0;repr<n;repr++)
#define Repi(i,n) for(int repr = i;repr<n;repr++)
using namespace std;

int main()
{	
	while(1)
	{
		double c;
		scanf("%lf",&c);
		if(c==0)
			break;

		double r = c/pi;

		printf("%.2f\n",(pi*r*r)/2);
	}

	return 0;
}