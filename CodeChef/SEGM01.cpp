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
#define TC(t) S(t); while(t--)
#define pi 3.1415
using namespace std;

int main()
{
	int t;
	char exp[100003];

	TC(t)
	{	
		int z =0;
		cin >>exp;
		int f=0,s=0;
		int ans = 0;
		
		for(int i=0;i<strlen(exp);i++)
		{
			if(exp[i] == '1')
				f = 1;

			if(f)
			{
				if(exp[i] == '0')
					s = 1;
			}

			if(s)
			{
				if(exp[i] == '1')
				{
					ans = 1;
					printf("NO\n");
					break;
				}
			}
			if(exp[i]=='0')
				z++;
		}

		if(z==strlen(exp))
		{	
			ans = 1;
			printf("NO\n");
		}
		if(!ans)
			printf("YES\n");

	}

	return 0;
}