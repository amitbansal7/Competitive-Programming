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

int rev(int a)
{
	int x;
	int n = 0;
	int i=0;

	while(a!=0)
	{
		n = n*10 + a%10;
		a = a/10;
		i++;
	}

	return n;
}

int main()
{
	int t,a,b;
	TC(t)
	{
		S(a);S(b);

		a = rev(a);
		b = rev(b);
		printf("%d\n",rev(a+b));
	}
	return 0;
}