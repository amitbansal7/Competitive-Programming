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

int main()
{
	string onefour = "1/4";
	string threefour = "3/4";
	string onetwo = "1/2";

	int b14 = 0;
	int b34 = 0;
	int b12 = 0;

	int n;
	S(n);
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s == onefour)
			b14++;
		else if(s == threefour)
			b34++;
		else if(s == onetwo)
			b12++;
	}
	int ans = 0;

	if(b12 >=1)
	{
		ans += b12/2;
		if(b12%2 == 1 && b14 >=2)
		{
			ans += 1;
			b14 = b14 - 2;
		}
		else if(b12%2 == 1)
			ans += 1;
	}
	if(b34 == b14)
		ans += b14;
	else if(b34 > b14)
		ans += b34;
	else if(b14 > b34)
		{
			ans += b34;
			b14 -= b34;

			ans += b14/4;
			if(b14 % 4 >0)
				ans += 1;
		}

	printf("%d\n",ans+1);


	return 0;
}

