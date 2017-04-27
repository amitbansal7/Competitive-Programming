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
	int n;

	while(1)
	{
		S(n);
		if(n==0)
			break;
		int a = 0;

		for(int i=1;i<=n;i++)
			a = a + i*i;

		printf("%d\n",a);

	}
	return 0;
}
