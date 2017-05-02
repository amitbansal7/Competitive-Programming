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
	llu n;
	scanf("%lld",&n);

	if(!(n &(n-1)))
		printf("TAK\n");
	else
		printf("NIE\n");
	return 0;
}