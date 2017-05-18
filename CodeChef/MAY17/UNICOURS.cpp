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
		int a[100001];

		for(int i=1;i<=n;i++)
			S(a[i]);

		int c=0; 
		bool co[n+1];
		Mset(co,1);
		co[0] = 0;

		for(int i=1;i<=n;i++)
		{
			if(a[i]>0)
				if(co[a[i]])
					for(int j=1;j<=a[i];j++)
						co[j] = 0;

		}

		for(int i=1;i<=n;i++)
			if(co[i])
				c++;

		printf("%d\n",c);
	}


	return 0;
}