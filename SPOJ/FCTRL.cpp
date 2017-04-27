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

int main(int argc, char const *argv[])
{

	int t,a;
	S(t);
	int five[12];
	int temp = 1;
	int result;

	for(int i=0;i<12;i++)
	{
		temp = temp*5;
		five[i] = temp;
	}
	while(t--)
	{
		S(a);
		result = 0;
		for(int i=0;i<12;i++)
			result = result + a/five[i];

		printf("%d\n",result);
		
	}
	return 0;
}