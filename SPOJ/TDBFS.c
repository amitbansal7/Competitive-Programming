/* Amit Bansal - amitbansal7 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define max(x,y) (((int )x) > ((int )y) ?(x) : (y))
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1

typedef struct Graph
{
	int v;
	struct AdjList* array;
} Graph;

typedef struct AdjList
{
	struct AdjListNode* head;
	struct AdjListNode* end;
} AdjList;

typedef struct AdjListNode
{
	int dest;
	struct AdjListNode* next;
} AdjListNode;

typedef struct Queue
{
	int data;
	struct Queue* next;
} Queue;

Queue* front = NULL;
Queue* end  = NULL;

int isEmpty()
{
	if(front==NULL)
		return 1;
	else
		return 0;

}
void enqueue(int data)
{
	Queue* q = (Queue*)malloc(sizeof(Queue));
	q->data = data;
	q->next = NULL;

	if(isEmpty())
		front = end = q;

	else
	{
		end->next = q;
		end = q;
	}
}

int pfront()
{
	if(!isEmpty())
		return front->data;

	else
		return NIL;
}

void dequeue()
{
	if(!isEmpty())
	{
		Queue* t = front;
		front = front->next;
		free(t);
	}
}

Graph* createGraph(int v)
{
	struct Graph* g = (Graph*)malloc(sizeof(Graph)*v);
	//mlc(Graph*,1);
	g->v = v;
	g->array = (struct AdjList*)malloc(sizeof(AdjList)*(v+1));
	//mlc(AdjList*, v+1);

	for(int i=1;i<=v;i++)
	{
		g->array[i].head = NULL;
		g->array[i].end = NULL;
	}

	return g;
}

void addedge(Graph* graph,int src, int dest)
{
	struct AdjListNode* newnode =(struct AdjListNode*)malloc(sizeof(struct AdjListNode));
	newnode->dest = dest;
	newnode->next = NULL;
	if(graph->array[src].head==NULL)
	{
		graph->array[src].head = newnode;
		graph->array[src].end = newnode;
	}

	else
	{
		graph->array[src].end->next = newnode;
		graph->array[src].end = newnode;
	}
}

void DFSutil(Graph* graph, int s,int V[])
{
	V[s] = 1;
	printf("%d ",s);
	AdjListNode* crawl;

	for(crawl = graph->array[s].head;crawl;crawl = crawl->next)
		if(!V[crawl->dest])
			DFSutil(graph, crawl->dest,V);
}

void BFS(Graph* graph,int s)
{
	int v = graph->v;
	int V[v+1];
	Mset(V,0);
	AdjListNode* crawl;

	front = NULL;
	end = NULL;

	enqueue(s);
	V[s] = 1;

	while(!isEmpty())
	{
		int src = pfront();
		dequeue();
		printf("%d ",src); 

		for(crawl = graph->array[src].head;crawl;crawl = crawl->next)
		{
			if(!V[crawl->dest])
			{	
				V[crawl->dest] = 1;
				enqueue(crawl->dest);
			}
		}
	}
	printf("\n");
}

void DFS(Graph* graph, int s)
{
	int v = graph->v;

	int V[v+1];
	Mset(V,0);

	DFSutil(graph,s,V);
	printf("\n");
}

int main()
{
	int n,dgre,src,dest;
	int a,b,v;

	S(n);

	for(int g=1;g<=n;g++)
	{
		S(v);
		Graph* G = createGraph(v);
		for(int e=1;e<=v;e++)
		{
			S(src);S(dgre);

			if(dgre>0)
				while(dgre--)
				{
					S(dest);
					addedge(G,src,dest);
				}
		}
		printf("graph %d\n",g);
		while(1)
		{
			S(a);S(b);

			if(a==0 && b==0)
				break;

			else if(b==0)
				DFS(G,a);

			else if(b==1)
				BFS(G,a);
		}

		free(G);
	}

	return 0;
}