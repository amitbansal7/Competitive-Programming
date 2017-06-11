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

int main(int argc, char const *argv[])
{
	int n,f,a;
	S(n);
	vector <int>Bobf[n];
	set<int>te;
	for(int i=0;i<n;i++)
	{
		S(f);
		Bobf[i].push_back(f);
		te.insert(f);
		S(a);
		for(int j=0;j<a;j++)
		{
			S(f);
			Bobf[i].push_back(f);
		}
	}
	set <int>frnds;
	for(int i=0;i<n;i++)
	{
		vector <int>::iterator it;
		for(it = Bobf[i].begin();it != Bobf[i].end();it++)
			frnds.insert(*it);
	}
	printf("%lu\n",frnds.size()-te.size());

	return 0;
}

