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
	string a;

	cin>>a;

	int one = 0;
	int f = 0;
	int zero = 0;
	int f1  =0;
	for(int i=0;a[i];i++)
	{
		if(a[i] == '0')
		{
			f = 0;
		}

		if(f && a[i] == '1')
			continue;

		else if(!f &&  a[i] == '1')
		{
			f = 1;
			one ++;
		}

		if(a[i] == '1')
			f1 = 0;

		if(f && a[i] == '0')
			continue;

		else if(!f1 &&  a[i] == '0')
		{
			f1 = 1;
			zero ++;
		}

	}

	if(a[a.length()-1] == '0')
		printf("%d\n",one+zero-1);

	else
		printf("%d\n",one+zero);
	
}