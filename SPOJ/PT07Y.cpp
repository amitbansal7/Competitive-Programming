/* Amit Bansal - amitbansal7 */
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
#define Rep(n) for(int repr=0;repr<n;repr++)
#define Repi(i,n) for(int repr = i;repr<n;repr++)
using namespace std;

typedef struct Djset
{
	int n;
	int *parent;
	int *rank;
}Set;

int find(Set* sets,int u)
{
	if(u != sets->parent[u])
		sets->parent[u] =  find(sets,sets->parent[u]);

	return sets->parent[u];
}

void Union(Set* sets,int u,int v)
{
	int x  = find(sets,u);
	int y  = find(sets,v);

	if(sets->rank[x] > sets->rank[y])
		sets->parent[y] = x;

	else
		sets->parent[x] = y;

	if(sets->rank[x] == sets->rank[y])
		sets->rank[y]++;
}

int iscycle(vector<pair<int,int> >adj,int v,int s)
{
	Set* sets = new Set;
	sets->n = v;
	sets->parent = new int[v];
	sets->rank = new int[v];

	for(int i=0;i<v;i++)
	{
		sets->parent[i] = i;
		sets->rank[i] = 0;
	}
	vector<pair<int,int> >::iterator it;

	for(it = adj.begin();it != adj.end();it++)
	{
		int x = it->first;
		int y = it->second;

		int u = find(sets,x);
		int v = find(sets,y);

		if(u==v)
			return 1;
		
		Union(sets,u,v);
	}
	return 0;
}

int main()
{	
	int v,u;
	int x,y;

	S(v);S(u);
	vector<pair<int,int> >adj;

	for(int i=1;i<=u;i++)
	{
		S(x);S(y);
		adj.push_back(make_pair(x,y));
	}

	if(!iscycle(adj,v+1,1))
		printf("YES\n");
	else
		printf("NO\n");


	return 0;
}