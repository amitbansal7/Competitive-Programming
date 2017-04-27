/* Amit Bansal - amitbansal7 */
#include <bits/stdc++.h>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1
#define INF 0x3f3f3f3f
#define TC(t) S(t); while(t--)
using namespace std;

int isoperand(char c)
{
	return ((c >='a' && c<='z' )|| (c>='A'&& c<='Z'));
}

int precedence(char c)
{
	if(c == '+' || c=='-')
		return 1;

	else if(c == '*' || c == '/')
		return 2;
	else if(c == '^')
		return 3;

	else
		return -1;
}


void topostfix(char *exp)
{
	stack<int> S;
	int k = -1;
	for(int i=0;exp[i];i++)
	{
		if(isoperand(exp[i]))
			exp[++k] = exp[i];

		else if(exp[i] == '(')
			S.push(exp[i]);

		else if(exp[i] == ')')
		{
			while(!S.empty() && S.top() != '(')
			{
				exp[++k] = S.top();
				S.pop();
			}
			if(!S.empty() && S.top() != '(')
				return;

			else
				S.pop();
		}

		else
		{
			while(!S.empty() && precedence(exp[i]) <= precedence(S.top()))
			{
				exp[++k] = S.top();
				S.pop();
			}

			S.push(exp[i]);
		}
	}

	while(!S.empty())
	{
		exp[++k] = S.top();
		S.pop();
	}
	exp[++k] = '\0';
	printf("%s\n",exp);
}

int main()
{
	int t;
	char exp[401];
	S(t);
	int i;
	char c;
	while(t--)
	{
		scanf("%s",exp);
		topostfix(exp);
	}
		
	return 0;
}
