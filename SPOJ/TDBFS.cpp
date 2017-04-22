/* Amit Bansal - amitbansal7 */
#include <bits/stdc++.h>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1
template <typename T>
T Max(T x, T y){x>y?x:y;}
using namespace std;

void DFS(vector <int >G[],int visited[],int s)
{
	printf("%d ",s);
	visited[s] = 1;

	vector<int >::iterator it;

	for(it = G[s].begin();it!=G[s].end();it++)
		if(!visited[*it])
			DFS(G,visited,*it);
}

void BFS(vector <int >G[],int s,int n)
{
	int visited[n+1];
	Mset(visited,0);

	queue <int >Q;
	Q.push(s);
	visited[s] = 1;

	while(!Q.empty())
	{
		int i = Q.front();
		printf("%d ",i);
		Q.pop();

		vector <int >::iterator it;

		for(it = G[i].begin();it != G[i].end();it++)
			if(!visited[*it])
			{	
				visited[*it] = 1;
				Q.push(*it);
			}
	}
}

int main()
{
	int n,m,a,b,t,v,ver,deg,dest;
	S(t);

	for(int i=1;i<=t;i++)
	{
		S(n);
		vector <int > G[n+1];
		for(int ed=1;ed<=n;ed++)
		{
			S(ver);
			S(deg);
			if(deg > 0)
			{
				while(deg--)
				{
					S(dest);
					G[ver].push_back(dest);
				}
			}
		}
		printf("graph %d\n",i);

		while(1)
		{
			S(a);S(b);
			if(a==0 && b==0)
				break;

			else if(b==0)
			{
				int visited[n+1];
				Mset(visited,0);
				DFS(G,visited,a);
				printf("\n");
			}

			else if(b==1)
			{
				BFS(G,a,n);
				printf("\n");
			}			
		}
	}
	return 0;
}