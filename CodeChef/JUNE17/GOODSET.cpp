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
	int A[101];
	A[0] = 1;
	for(int i=1;i<101;i++)
		A[i] = A[i-1] +3;
	TC
	{
		int n;
		S(n);

		for(int i=0;i<n;i++)
			printf("%d ",A[i]);
		printf("\n");
		
	}
}