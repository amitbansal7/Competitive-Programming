/* Amit Bansal - amitbansal7 */
#include <bits/stdc++.h>
#include <stdlib.h>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1
#define INF 0x3f3f3f3f
#define TC int testcase; S(testcase); while(testcase--)
#define pi 3.1415
using namespace std;

int main()
{
	int t;
	S(t);
	int s,f;
	bool possible;
	int frnds;

	for(int i=1;i<=t;i++)
	{
		S(s);S(f);
		int *nos = new int[f];
		for(int j=0;j<f;j++)
			S(nos[j]);

		frnds = 0;
		possible = false;
		int sum = 0;
		sort(nos,nos+f,greater<int>());

		printf("Scenario #%d:\n",i);

		while(sum < s && frnds<f)
		{
			sum += nos[frnds];
			frnds++;
		}

		if(sum >= s)
			possible = true;

		if(possible)
			printf("%d\n\n",frnds);
		else
			printf("impossible\n\n");

	}
	return 0;
}