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
	lli M[100001][3];
	int n;
	int cs=0;
	while(1)
	{
		S(n);
		if(n==0)
			break;

		for(int i=0;i<n;i++)
		{
			Sl(M[i][0]);
			Sl(M[i][1]);
			Sl(M[i][2]);
		}
		M[0][2] += M[0][1];
		M[1][0] += M[0][1];
		M[1][1] += min(M[1][0], min(M[0][1], M[0][2]));
		M[1][2] += min(M[1][1], min(M[0][1], M[0][2]));


		for(int i=2;i<n;i++)
		{
			M[i][0] += min(M[i-1][0], M[i-1][1]);
			M[i][1] += min(min(M[i][0],M[i-1][0]), min(M[i-1][1],M[i-1][2]));
			M[i][2] += min(M[i][1], min(M[i-1][1],M[i-1][2]));
		}
		cs++;
		printf("%d. %lld\n",cs,M[n-1][1]);

	}
}
