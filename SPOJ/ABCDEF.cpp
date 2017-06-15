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

int main()
{
	int n,a;
	S(n);
	vector <int>eq,lhs,rhs;
	for(int i=0;i<n;i++)
	{
		S(a);
		eq.push_back(a);
	}

	int size = eq.size();

	for(int a=0;a<size;a++)
		for(int b=0;b<size;b++)
			for(int c=0;c<size;c++)
				lhs.push_back((eq[a]*eq[b])+eq[c]);

	for(int f=0;f<size;f++)
		for(int d=0;d<size;d++)
			for(int e=0;e<size;e++)
				if(eq[d]!=0)
					rhs.push_back((eq[d]*(eq[f]+eq[e])));


	sort(lhs.begin(),lhs.end());
	sort(rhs.begin(),rhs.end());
	llu count = 0;
	for(int i=0;i<lhs.size();i++)
	{
		int l  = lower_bound(rhs.begin(),rhs.end(),lhs[i]) - rhs.begin();
		int h = upper_bound(rhs.begin(),rhs.end(),lhs[i]) - rhs.begin();

		count += h-l;
	}
	printf("%lld\n",count);
}
