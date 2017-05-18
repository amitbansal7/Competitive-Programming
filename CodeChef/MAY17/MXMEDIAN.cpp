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

		int *A = mlc(int,2*n);

		for(int i=0;i<2*n;i++)
			S(A[i]);

		sort(A,A+2*n);

		printf("%d\n",A[2*n -(n/2)-1]);
		for(int i=0;i<n;i++)
			printf("%d %d ",A[i],A[i+n]);
		printf("\n");
	}
	
}