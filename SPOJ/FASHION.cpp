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
	int t,n,h;

	TC(t)
	{
		S(n);
		h=0;
		int *m = new int[n];
		int *w = new int[n];

		for(int i=0;i<n;i++)
			S(m[i]);

		for(int i=0;i<n;i++)
			S(w[i]);

		sort(m,m+n);
		sort(w,w+n);

		for(int i=0;i<n;i++)
		{
			h+= m[i]*w[i];
		}

		printf("%d\n",h);

	}
	return 0;
}
