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

lli GCD(lli a,lli b)
{
	if(!a)
		return b;
	return GCD(b%a,a);
}

lli GCDlarge(lli a,string b)
{
	lli mod = 0;

	for(int i=0;i<b.length();i++)
		mod = (mod*10 + b[i] - '0')%a;

	return GCD(a,mod);

}

int main(int argc, char const *argv[])
{
	TC
	{
		lli a;
		string b;
		cin>>a;cin>>b;

		if(a == 0)
			cout<<b<<endl;
		else
			printf("%lld\n",GCDlarge(a,b));
	}

	return 0;
}

