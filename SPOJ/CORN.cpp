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
	int t;

	char exp[1000];
	
	TC(t)
	{

		double r = 0,s=0,h=0;
		scanf("%s",exp);
		int i;

		char sc[1000];
		char rc[1000];
		char hc[1000];

		int si=0,ri=0,hi=0;

		for(i=0;exp[i] != 'e';i++)
			rc[ri++] = exp[i];

		i++;

		for(;exp[i] != 'e';i++)
			sc[si++] = exp[i];

		i++;

		for(;exp[i];i++)
			hc[hi++] = exp[i];
		
		r = atof(rc);
		s = atof(sc);
		h = atof(hc);

		double l = sqrt((r*r + h*h));
		lli ans = ceil(l*pi*r*s);
		printf("%lld\n",ans);
	}


	return 0;
}