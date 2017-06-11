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
	string s;

	while(getline(cin,s))
	{

		int cpp = 0;
		int error = 0;
		int upper = 0;
		int t=0;

		for(int i=0;i<s.length();i++)
		{
			if(isupper(s[i]))
			{
				t++;
				upper = 1;
			}

			if(s[i] == '_')
			{
				cpp = 1;
				if(s[i+1]=='_')
				{
					error = 1;
					break;
				}
			}

			if(cpp && upper )
			{
				error = 1;
				break;
			}
		}

		if(isupper(s[0]))
			error = 1;
		if(s[s.length()-1] == '_' || (cpp && s[0] == '_') || t == s.length())
			error = 1;

		if(cpp && !error)
		{
			for(int i=0;i<s.length();i++)
			{
				if(s[i] == '_')
				{
					printf("%c",s[i+1]-32);
					i++;
				}
				else
					cout<<s[i];
			}
			printf("\n");
		}
		else if(error)
			printf("Error!\n");

		else
		{
			cout<<s[0];
			for(int i=0;i<s.length()-1;i++)
			{
				if(s[i+1] >= 65 && s[i+1] <= 90)
				{
					printf("_");
					printf("%c",s[i+1]+32);
				}
				else
					cout<<s[i+1];
			}
			printf("\n");
		}
	}
	return 0;
}
