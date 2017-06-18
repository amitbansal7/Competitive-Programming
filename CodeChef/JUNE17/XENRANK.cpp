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
#define Pi 3.14159
using namespace std;

llu rankij(llu i,llu j)
{
	llu xi = ((i+1)*(i+2))/2;
	xi += (((j+i)*(j+i+1))/2 - (i*(i+1))/2);
	return xi;
}
int main()
{
	TC
	{
		llu i,j;
		Sl(i);Sl(j);
		printf("%lld\n",rankij(i,j));
	}
}