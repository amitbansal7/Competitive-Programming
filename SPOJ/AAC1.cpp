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
#define TC int t; S(t); while(t--)
#define Rep(n) for(int repr=0;repr<n;repr++)
#define Repi(i,n) for(int repr = i;repr<n;repr++)
using namespace std;

void dijkstra(vector <pair<int, int> >adj[],int s,int v)
{
	priority_queue <pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > >pq;

	pq.push(make_pair(0,s));
	vector<int> dist(v+1,INF);
	dist[s] = 0;

	while(!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();

		vector<pair<int,int> >::iterator it;

		for(it = adj[u].begin();it != adj[u].end();it++)
		{
			int v = (*it).first;
			int w = (*it).second;

			if(dist[v] > dist[u] + w)
			{
				dist[v] = dist[u] + w;
				pq.push(make_pair(dist[v],v));
			}
		}
	}
	printf("%d\n",dist[v]);
}

int main()
{	
	int m,n,x,y,t; 
	S(t);
	while(t--)
	{
		S(n);S(m);

		vector <pair<int,int> >adj[n+1];

		for(int i=0;i<m;i++)
		{
			S(x);S(y);
			adj[x].push_back(make_pair(y,1));
			adj[y].push_back(make_pair(x,1));
		}
		dijkstra(adj,1,n);
	}
	
	return 0;
}