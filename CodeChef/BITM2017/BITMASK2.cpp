/* Amit Bansal - amitbansal7 */
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
#define Rep(n) for(int repr=0;repr<n;repr++)
#define Repi(i,n) for(int repr = i;repr<n;repr++)
using namespace std;


int main()
{	
	TC
	{
		int n;
		S(n);
		int s=0;
		int *a = new int[n];
		int *b = new int[n];

		for(int i=0;i<n;i++)
			S(a[i]);

		for(int i=0;i<n;i++)
			S(b[i]);

		sort(a,a+n);
		sort(b,b+n,greater<int>());

		for(int i=0;i<n;i++)
			s += a[i]*b[i];

		printf("%d\n",s);
	}


	return 0;
}