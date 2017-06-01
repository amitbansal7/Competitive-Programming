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
	TC
	{
		int toses[9];
		Mset(toses,0);
		int set;
		S(set);
		string s;
		cin>>s;

		for(int i=0;i<s.length()-2;i++)
		{
			if(s[i] == 'T')
			{
				if(s[i+1] =='T')
				{
					if(s[i+2] == 'T')
						toses[0]++;

					else
						toses[1]++;
				}
				else
				{
					if(s[i+2] == 'T')
						toses[2]++;
					else
						toses[3]++;
				}

			}
			else
			{
				if(s[i+1] == 'H')
				{
					if(s[i+2] == 'H')
						toses[7]++;
					else
						toses[6]++;

				}
				else
				{
					if(s[i+2] == 'T')
						toses[4]++;

					else
						toses[5]++;
				}
			}
		}

		printf("%d ",set);
		for(int i=0;i<8;i++)
			printf("%d ",toses[i]);
		printf("\n");
	}
}