/* Amit Bansal - amitbansal7 */
/* EDIST - Edit distance */
// Learned from https://github.com/t3nsor/SPOJ/blob/master/edist.cpp
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
#define Pi 3.14159
using namespace std;

int DP[2002][2002];

int min(int i,int j,int k)
{
	i = i<j?i:j; return i<k?i:k;
}

int main()
{
	TC
	{
		string a,b;

		cin>>a;
		cin>>b;
		int l1 = a.length();
		int l2 = b.length();

		for(int i=0;i<=l1;i++)
			for(int j=0;j<=l2;j++)
				{
					if(i==0)
						DP[i][j] = j;

					else if(j==0)
						DP[i][j] = i;

					else if(a[i-1] == b[j-1])
						DP[i][j] = DP[i-1][j-1];

					else
						DP[i][j] = 1 + min(DP[i-1][j-1],DP[i][j-1],DP[i-1][j]);
				}

		printf("%d\n",DP[l1][l2]);

	}
	
}