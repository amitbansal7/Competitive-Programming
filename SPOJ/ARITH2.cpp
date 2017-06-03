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
		vector <int> numbers;
		vector <char> ops;
		lli ans = 0;

		string s;
		while(1)
		{
			getline(cin,s);
			if(s.length() > 2)
				break;
		}

		for(int i=0;i<s.length();i++)
		{
			if(isdigit(s[i]))
			{
				int num = s[i] - '0';
				while(isdigit(s[i+1]))
				{
					num = num *10;
					num += (s[i+1]- '0');
					i++;
				}
				numbers.push_back(num);
			}
			else if(s[i] == ' ' || s[i] == '=')
				continue;

			else
				ops.push_back(s[i]);
		}

		vector <int>::iterator it;
		ans = numbers[0];
		int ij = 0;
		for(it = numbers.begin()+1;it != numbers.end();it++)
		{
			switch(ops[ij])
			{
				case '+':
					ans += *it;
					break;
				case '-':
					ans -= *it;
					break;
				case '*':
					ans *= *it;
					break;
				case '/':
					ans /= *it;
					break;
			}
			ij++;
		}
		printf("%lld\n",ans);
	}
}
