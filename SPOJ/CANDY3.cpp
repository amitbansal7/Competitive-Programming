/* Amit Bansal - amiatbansal7 */
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
	lli n;
	int t;

	TC(t)
	{
		Sl(n);
		lli *A = new lli[n];
		lli s =0;
		for(lli i=0;i<n;i++)
		{	
			Sl(A[i]);
			s = (s+ A[i])%n;
		}
		if(s==0)
			printf("YES\n");

		else 
			printf("NO\n");

	}

	return 0;
}
