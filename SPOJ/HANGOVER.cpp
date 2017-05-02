/* Amit Bansal - amitbansal7 */
#include <bits/stdc++.h>
#include <stdlib.h>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1
#define INF 0x3f3f3f3f
#define TC(t) S(t); while(t--)
#define pi 3.1415
using namespace std;

int main()
{
	float n;
	
	while(1)
	{
		scanf("%f",&n);
		if(n == 0.00)
			break;

		int i = 1;
		double t = 0;
		while(t < n)
		{
			i++;
			t = t + 1.0/i;
		}

		printf("%d card(s)\n",i-1);
	}

	return 0;
}