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

int main()
{
	int t;
	S(t);
	for(int i=0;i<t;i++)
	{
		double r;
		scanf("%lf",&r);
		double ab = sqrt((16*pow(r,2)-1)/4);
		double ac = sqrt(pow(2*r,2) - pow(ab,2));
		double s = pow(ab,2) + ac;
		printf("Case %d: %.2f\n",i+1,s);
	}
}