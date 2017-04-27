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
	int t,n,h,c;

	while(1)
	{
		char exp[201];
		S(c);
		if(c==0)
			break;

		scanf("%s",exp);
		int l = strlen(exp);
		int ic = l/c;

		for(int i=0;i<ic;i++)
		{
			if(i%2==1)
			{
				int m = i*c;
				int l = m+c-1;
				while(m<l)
				{
					char t = exp[l];
					exp[l] = exp[m];
					exp[m] = t;
					l--;
					m++;
				}
			}

		}
		for(int i=0;i<c;i++)
			for(int j=0;j<ic;j++)
				printf("%c",exp[(c*j)+i]);

		printf("\n");

	}
	return 0;
}
