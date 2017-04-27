/* Amit Bansal - amitbansal7 */
#include <bits/stdc++.h>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1
#define INF 0x3f3f3f3f
#define TC(t) S(t); while(t--)
using namespace std;

int main()
{
	int n,a;

	while(1)
	{
		S(n);
		if(n==-1)
			break;

		int *A = new int[n+1];
		int s = 0;

		for(int i=0;i<n;i++)
		{
			S(a);
			s+=a;
			A[i] = a;
		}

		int c = s/n;
		int m = 0;

		if(s%n!=0)
			printf("%d\n",-1);

		else
		{
			for(int i=0;i<n;i++)
			if(A[i] < c)
				m = m + (c - A[i]);

			printf("%d\n",m);
		}
	}
	return 0;
}
