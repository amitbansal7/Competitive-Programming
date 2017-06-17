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

int main()
{
	TC
	{
		int n;
		int a;
		S(n);
		map <int,int> mymap;
		for(int i=0;i<n;i++)
		{
			S(a);
			if(mymap.find(a) == mymap.end())
				mymap.insert(pair<int,int>(a,1));
			else
				mymap[a]++;
		}

		map<int,int>::iterator it;
		int maxd = INT_MIN;
		int data;
		for(it = mymap.begin();it!= mymap.end();it++)
			if(maxd < it->second)
			{
				maxd = it->second;
				data = it->first;
			}

		if(maxd > n/2 )
			printf("YES %d\n",data);
		else
			printf("NO\n");

	}
	return 0;
}
