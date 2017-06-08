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
	string a;
	string b;

	int n;
	while(scanf("%d",&n)!=EOF)
	{
		cin>>a;
		cin>>b;
		int match = 0;
		if(a.length() > b.length())
			continue;

		else
		{
			for(int j=0;j<b.length();j++)
			{
				int i = 0;
				if(a[i] == b[j])
				{
					int tj = j;
					i++;
					j++;

					while(a[i] == b[j] && j < b.length())
					{
						i++;
						j++;
					}

					if(n == i)
					{
						match = 1;
						printf("%d\n",tj);
					}

					j = tj;
				}
			}
		}
		if(match == 0)
			printf("\n");

		printf("\n");
	}
	return 0;
}

