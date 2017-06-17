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
#define TC int testcase; S(testcase); while(testcase--)
#define Pi 3.14159
using namespace std;

int main(int argc, char const *argv[])
{
	TC
	{
		int a,b;
		S(a);
		int A[a];
		for(int i=0;i<a;i++)
			S(A[i]);
		sort(A,A+a);
		S(b);
		int B[b];
		for(int i=0;i<b;i++)
			S(B[i]);

		sort(B,B+b);

		int mindif = INT_MAX;
		for(int i=0;i<a;i++)
			for(int j=0;j<b;j++)
				if(mindif > abs(A[i] - B[j]))
					mindif = abs(A[i] - B[j]);

		printf("%d\n",mindif);

	}
	return 0;
}
