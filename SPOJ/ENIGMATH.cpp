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
#define TC int testcase; S(testcase); while(testcase--)
#define Pi 3.14159
using namespace std;

int GCD(int a,int b)
{
	while(a!=b)
	{
		if(a > b)
			a = a - b;

		else
			b = b - a;
	}

	return a;
}

int main()
{
	TC
	{
		int a,b;
		S(a);S(b);
		int gcd = GCD(a,b);
		printf("%d %d\n",b/gcd,a/gcd);
	}
	return 0;
}
