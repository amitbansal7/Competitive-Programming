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

int DP[1010][1010];

int solve(int pos,int h,int a,int t)
{
	if(a<=0 || h<=0)
		return t;

	if(DP[h][a] != -1)
		return DP[h][a];

	if(pos == 1)
		t = max(solve(3,h-5,a-10,t),solve(2,h-20,a+5,t))+1;

	else if(pos == 2)
		t = max(solve(3,h-5,a-10,t),solve(1,h+3,a+2,t))+1;

	else if(pos == 3)
		t = max(solve(2,h-20,a+5,t),solve(1,h+3,a+2,t))+1;


	DP[h][a] = t;
	return t;
}

int main()
{
	TC
	{
		int h,a;
		S(h);S(a);
		memset(DP,-1,sizeof(DP));
		printf("%d\n",solve(1,h+3,a+2,0));
	}
	return 0;
}
