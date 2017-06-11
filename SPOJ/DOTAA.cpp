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
#define INF INT_MAX
#define TC int testcase; S(testcase); while(testcase--)
#define Pi 3.14159
using namespace std;

int main(int argc, char const *argv[])
{
	TC
	{
		int n,m,d;
		S(n);S(m);S(d);

		int *H = mlc(int,n);

		for(int i=0;i<n;i++)
			S(H[i]);

		int t = 0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
				if(H[j] > d)
				{
					t++;
					H[j] -= d;
					break;
				}
		}
		int f = 1;
		for(int i=0;i<n;i++)
			if(H[i] <= 0)
			{
				f = 0;
				break;
			}

		if(f && t == m)printf("YES\n");
		else
			printf("NO\n");
	}



}
