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
	int A[101][101];
	int DP[101][101] = {0};
	int n,m;
	S(n);S(m);

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            S(A[i][j]);

            if(i==0)
                DP[i][j] = A[i][j];
        }

    int minf;
	for(int i=1;i<n;i++)
		for(int j=0;j<m;j++)
		{
			minf = DP[i-1][j];

			if(j==0)
				minf = min(minf, DP[i-1][j]);

			if(j-1>=0)
				minf = min(minf, DP[i-1][j-1]);

			if(j+1<m)
				minf = min(minf, DP[i-1][j+1]);

			DP[i][j] = minf + A[i][j];
		}

	int minfare= DP[n-1][0];
    for(int i=0;i<m;i++)
    	minfare = min(minfare, DP[n-1][i]);

    printf("%d\n",minfare);

}
