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
#define TC int t; S(t); while(t--)
#define Rep(n) for(int repr=0;repr<n;repr++)
#define Repi(i,n) for(int repr = i;repr<n;repr++)
using namespace std;

int vis = 0;

void DFS(vector <int> adj[],int s,int visited[])
{
	vis++;
	visited[s] = 1;

	vector <int>::iterator it;
	for(it = adj[s].begin();it!=adj[s].end();it++)
		if(!visited[*it])
			DFS(adj,*it,visited);

}

int main()
{
	int v,e,i,j;
	S(v);S(e);

	vector <int> adj[v+2];

	Rep(e)
	{
		S(i);S(j);
		adj[i].push_back(j);
	}

	int max = INT_MIN;
	int visited[v+2];
	for(int i=1;i<=v;i++)
	{
		Mset(visited,0);
		vis = 0;
		DFS(adj,i,visited);
		if(vis > max)
			max = vis;
	}

	printf("%d\n",max);
	
}