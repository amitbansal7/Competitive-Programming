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
	TC
	{
		int n;
		S(n);
		string s[n];
		getline(cin,s[0]);
		for(int i=0;i<n;i++)
			getline(cin,s[i]);

		set<string> se;
		map<string,int >ma;

		for(int i=0;i<n;i++)
		{
			se.insert(s[i]);
			if(ma.find(s[i]) == ma.end())
				ma.insert(pair<string,int>(s[i],1));
			else
				ma[s[i]]++;
		}
		vector <string>vec(se.begin(),se.end());
		vector <string>::iterator it;
		for(it = vec.begin();it != vec.end();it++)
			cout<<*it<<' '<<ma[*it]<<endl;

		printf("\n");
	}

}
