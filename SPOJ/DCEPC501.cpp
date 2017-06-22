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
#define MOD 1000000007
using namespace std;

lli DP[100002];
int n;

lli solve(int A[],int i)
{
	if(i >= n)
		return 0;

	if(DP[i] != -1)
		return DP[i];


	return DP[i] = max(A[i] + solve(A,i+2),
					max(A[i] + ((i+1)< n?A[i+1]:0) + solve(A,i+4),
						A[i] + ((i+1)< n?A[i+1]:0) + ((i+2)< n?A[i+2]:0) + solve(A,i+6)));
}

int main()
{
	TC
	{
		Mset(DP,-1);
		S(n);
		int *T = mlc(int, n);
		for(int i=0;i<n;i++)
			S(T[i]);

		printf("%lld\n",solve(T,0));
	}

}
