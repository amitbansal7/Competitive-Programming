/* Amit Bansal - amitbansal7 */
#include <bits/stdc++.h>
#include <stdlib.h>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1
#define INF 0x3f3f3f3f
#define TC int testcase; S(testcase); while(testcase--)
#define pi 3.1415
using namespace std;

int main()
{	
	TC
	{
		int ng,nm;
		S(ng);S(nm);
		int maxg = INT_MIN;
		int maxm = INT_MIN;

		int *g = new int[ng+1];
		int *m = new int[nm+1];

		for(int i=0;i<ng;i++)
		{
			S(g[i]);

			if(maxg < g[i])
				maxg = g[i];
		}
		for(int i=0;i<nm;i++)
		{
			S(m[i]);
			if(maxm < m[i])
				maxm = m[i];
		}

		if(maxg < maxm)
			printf("MechaGodzilla\n");

		else
			printf("Godzilla\n");

	}
	return 0;
}