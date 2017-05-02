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
		int n;
		S(n);
		int pas = 0;
		int sum = 0;

		while(sum < n)
		{	
			pas++;
			sum += pas;
		}

		int nu,de;
		
		if(pas%2 != 0)
		{
			if(n%pas == 0)
				de = pas;
			else
				de = n%pas;

			nu = pas - de +1;
			printf("TERM %d IS %d/%d\n",n,nu,de);

		}
		else
		{
			nu = n - (sum - pas);
			de = pas - nu+1;
			printf("TERM %d IS %d/%d\n",n,nu,de);
		}
	}	
	return 0;
}