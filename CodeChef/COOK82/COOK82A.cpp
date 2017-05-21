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
		map<char,int> mymap;
		string a;
		int goals;
		for(int i=0;i<4;i++)
		{
			cin>>a;S(goals);

			mymap.insert(pair<char,int>(a[0],goals));
		}

		if(mymap.find('R')->second < mymap.find('M')->second && 
			mymap.find('B')->second > mymap.find('E')->second)
			printf("Barcelona\n");

		else
			printf("RealMadrid\n");
	}
}