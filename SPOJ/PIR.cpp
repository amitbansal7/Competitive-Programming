/* Amit Bansal - @amitbansal7 */
#include <bits/stdc++.h>
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
#define MOD 1000000007
using namespace std;


int main()
{
	TC
	{
		double u, v, w, W, V, U, up, vp, wp;

		cin >> u >> v >> w >> W >> V >> U;

		up = pow(v, 2) + pow(w, 2) - pow(U, 2);
		vp = pow(w, 2) + pow(u, 2) - pow(V, 2);
		wp = pow(u, 2) + pow(v, 2) - pow(W, 2);

		double ans =  sqrt(4 * pow(u, 2) * pow(v, 2) * pow(w, 2) - pow(u, 2) * pow(up, 2) -
		pow(v, 2) * pow(vp, 2) - pow(w, 2) * pow(wp, 2) + up * vp * wp);

		printf("%.4lf\n", ans / 12);

	}
}
