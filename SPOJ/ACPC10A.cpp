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
	int a,b,c;

	while(1)
	{
		S(a);S(b);S(c);
		if(a==0 && b==0 && c==0)
			break;

		int d = c-b;
		int d2 = b-a;
		int r,r2;
		if(a && b)
			r = b/a;
		else if(!a || !b)
			r = 0;

		if(b && c)
			r2 = c/b;

		else if(!b || !c)
			r2 = 0;

		if(a==b && b==c)
			continue;

		else if(d==d2 && b+d == c)
			printf("AP %d\n",c+d);

		else if(r==r2 && b*r == c)
			printf("GP %d\n",c*r);

	}
	return 0;
}
