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

int DP[1000][2];
int n;

int solve(int i,int L[],int B[],int b)
{
	if(i >= n)
		return 0;

	if(i == 0)
		return DP[i][0] = max(B[i] + solve(i+1,L,B,1), L[i] + solve(i+1,L,B,0));

	if(DP[i][b] != -1)
		return DP[i][b];
	int a;
	if(b)
		return DP[i][b]  =  max(abs(B[i] - L[i-1]) + L[i] + solve(i+1,L,B,0),
					abs(L[i] - L[i-1]) + B[i] + solve(i+1,L,B,1));
	else
		return DP[i][b] =  max(abs(B[i] - B[i-1]) + L[i] + solve(i+1,L,B,0),
					abs(L[i] - B[i-1]) + B[i] + solve(i+1,L,B,1));
}

int main()
{
	S(n);

	int l[n];
	int b[n];
	Mset(DP,-1);
	for(int i=0;i<n;i++)
	{
		S(l[i]);S(b[i]);
	}

	printf("%d\n",solve(0,l,b,0));

}
