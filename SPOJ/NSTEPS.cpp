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
	int t,x,y;
	TC(t)
	{
		S(x);S(y);

		if(x==y || (x-y==2))
		{
			if(x%2==0)
				printf("%d\n",x+y);

			else
				printf("%d\n",x+y-1);
		}

		else
			printf("No Number\n");
	}
	return 0;
}
