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


int main()
{
	int a,k;
	S(a);S(k);

	int *A = mlc(int,a);
	for(int i=0;i<a;i++)
		S(A[i]);

	int *K = mlc(int,k);
	for(int i=0;i<k;i++)
		S(K[i]);

	sort(K,K+k,greater<int>());

	int j =0;
	int f = 0;
	for(int i=0;i<a;i++)
	{
		if(A[i] == 0)
		{
			A[i] = K[j];
			j++;
		}
	}

	for(int i=0;i<a-1;i++)
		if(A[i] > A[i+1])
		{
			f = 1;
			break;
		}

	if(f)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}

