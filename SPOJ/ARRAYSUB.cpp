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
	int n,k;
	S(n);
	int *A = mlc(int,n);
	for(int i=0;i<n;i++)
		S(A[i]);
	S(k);
	deque <int>Q;
	int i;
	for(i = 0;i<k;i++)
	{
		while(!Q.empty() && A[i] >= A[Q.back()])
			Q.pop_back();

		Q.push_back(i);
	}

	for(i=k;i<n;i++)
	{
		printf("%d ",A[Q.front()]);

		while(!Q.empty() && Q.front()<= i-k)
			Q.pop_front();

		while(!Q.empty() && A[Q.back()] <= A[i])
			Q.pop_back();

		Q.push_back(i);

	}

	printf("%d ",A[Q.front()]);

}
