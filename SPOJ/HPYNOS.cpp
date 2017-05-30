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

int op = 0;
map <int,int> mymap;

void check(int a)
{
	int s=0;
	while(a!=0)
	{
		s += (a%10) * (a%10);
		a = a/10;
	}
	op++;
	if(mymap.find(s) == mymap.end())
	{
		if(s == 1)
			printf("%d\n",op);
		else
		{
			mymap.insert(pair<int,int>(s,1));
			check(s);
		}
	}
	else
		printf("%d\n",-1);
}

int main()
{
	int a;
	S(a);

	if(a == 1)
		return 0;
	else
		check(a);
}