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

bool isBipartite(vector<int>adj[],int v,int src,int visited[],int color[])
{
	visited[src] = 1;
	queue <int>Q;
	color[src] = 1;
	Q.push(src);

	while(!Q.empty())
	{
		int u = Q.front();
		Q.pop();
		vector <int>::iterator it;
		for(it = adj[u].begin();it != adj[u].end();it++)
		{
			if(!visited[*it] && color[*it]==NIL)
			{
				visited[*it] = 1;
				if(color[u] == 1)
					color[*it] = 0;
				else
					color[*it] = 1;

				Q.push(*it);
			}
			else if(color[u] == color[*it])
					return false;

		}
	}

	return true;
}

int main()
{
	int test;
	S(test);
	for(int i=1;i<=test;i++)
	{
		int v,e,y,x;
		S(v);S(e);
		v++;
		vector <int>adj[v];

		for(int i=0;i<e;i++)
		{
			S(x);S(y);
			adj[x].push_back(y);
			adj[y].push_back(x);
		}

		int visited[v];
		Mset(visited,0);
		bool ans = 1;
		int color[v];
		Mset(color,-1);
		for(int i=1;i<v;i++)
			if(color[i]==-1)
			{
				ans = isBipartite(adj,v,i,visited,color);
				if(ans == 0)
					break;
			}

		printf("Scenario #%d:\n",i);
		if(ans)
			printf("No suspicious bugs found!\n");
		else
			printf("Suspicious bugs found!\n");
	}
	return 0;
}

