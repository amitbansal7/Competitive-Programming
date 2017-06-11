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
#define INF INT_MAX
#define TC int testcase; S(testcase); while(testcase--)
#define Pi 3.14159
using namespace std;

int main(int argc, char const *argv[])
{
	TC
	{
		double a,b,c,d;
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		double s = (a+b+c+d)/2;
		printf("%.2lf\n",sqrt((s-a)*(s-b)*(s-c)*(s-d)));
	}
	return 0;
}
