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

int Primes[10001];

void sieveprime()
{
	Mset(Primes,1);

	for(int i=2;i<=10000;i++)
		if(Primes[i])
			for(int j=2;i*j<=10000;j++)
				Primes[i*j] = 0;

}

bool isdiff1(int a,int b)
{
	int dif = 0;
	int x,y;
	while(a!=0 && b!=0)
	{
		x = a%10;y = b%10;
		if(x!=y)
			dif++;
		a/=10;b/=10;
	}

	return dif==1;
}
void BFS(vector <int> adj[],int src,int dest)
{
	int visited[10001];
	int dist[10001];

	Mset(dist,1000000);
	Mset(visited,0);
	for(int i=0;i<1000;i++)
		visited[i] = 1;

	dist[src] = 0;
	visited[src] = 1;
	queue<int> Q;
	Q.push(src);

	while(!Q.empty())
	{
		int u = Q.front();
		Q.pop();
		vector <int>::iterator it;
		for(it = adj[u].begin();it!=adj[u].end();it++)
		{
			if(!visited[*it])
			{
				visited[*it] = 1;
				dist[*it] = dist[u] + 1;
				Q.push(*it);
				if(visited[dest])
					break;
			}
		}
	}
	printf("%d\n",dist[dest]);
}
int main()
{
	sieveprime();
	vector<int>adj[10001];

	for(int i=1001;i<=9999;i++)
		for(int j=1001;j<=9999;j++)
			if(i!=j && Primes[i] && Primes[j] && isdiff1(i,j))
				adj[i].push_back(j);

	TC
	{
		int src,dest;
		S(src);S(dest);

		BFS(adj,src,dest);


	}
}
