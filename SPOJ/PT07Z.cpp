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

int maxdis = -1;
int maxindex;

void BFS(vector<int> adj[],int s,int n)
{
	int dist[n+1];
	Mset(dist,-1);

	queue <int> Q;

	Q.push(s);
	dist[s] = 0;

	while(!Q.empty())
	{
		int u = Q.front();
		Q.pop();

		vector<int>::iterator it;

		for(it = adj[u].begin();it != adj[u].end();it++)
		{
			if(dist[*it] == -1)
			{	
				Q.push(*it);
				dist[*it] = dist[u] + 1;	
			}
		}

	}

	for(int i=1;i<=n;i++)
	{
		if(maxdis < dist[i])
		{
			maxdis = dist[i];
			maxindex = i;
		}
	}
}
		
int main()
{
	int n,u,v;

	S(n);

	vector <int> adj[n+1];

	for(int i=0;i<n;i++)
	{
		S(u);S(v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	BFS(adj,1,n);
	BFS(adj,maxindex,n);

	printf("%d\n",maxdis);

	return 0;
}