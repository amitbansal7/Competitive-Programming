
/* Amit Bansal - amitbansal7 */
//AC
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
#define Rep(n) for(int repr=0;repr<n;repr++)
#define Repi(i,n) for(int repr = i;repr<n;repr++)
using namespace std;
 
 
int main()
{	
	TC
	{
		string a;
		cin>>a;
 
		int f=1;
		int i=0;
		
		while(f)
		{
			if(a[i+1])
			{
				if(a[i] > a[i+1])
					f= 0;
			}
 
			else
				break;
 
			i++;
 
		}
 
		if(f)
			printf("yes\n");
 
		else
			printf("no\n");
	}
 
 
	return 0;
}