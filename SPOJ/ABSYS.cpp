/* Amit Bansal - amitbansal7 */
#include <bits/stdc++.h>
#include <stdlib.h>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1
#define INF 0x3f3f3f3f
#define TC int testcase; S(testcase); while(testcase--)
#define pi 3.1415
using namespace std;

int main()
{
	int t;
	S(t);
	cin.ignore();
	while(t--)
	{
		string a;
		char n[1000];
		char m[1000];
		char an[1000];

		int i,j,k;
		j=0;
		
		cin.ignore();
		getline(cin,a);

		for(i=0;a[i]!='+';i++)
			n[j++] = a[i];

		n[j-1] = '\0';
		j=0;
		for(i = i+2;a[i]!='=';i++)
			m[j++] = a[i];
			
		m[j-1] = '\0';
		j=0;
		for(i=i+2;a[i];i++)
			an[j++] = a[i];
		an[j] = '\0';
		i=j=k=1;
		for(int l = 0;l<strlen(n);l++)
		{
			if(!isdigit(n[l]))
			{
				i = 0;
				break;
			}
		}
		for(int l = 0;l<strlen(m);l++)
		{
			if(!isdigit(m[l]))
			{	
				j=0;
				break;
			}
		}
		for(int l = 0;l<strlen(an);l++)
		{
			if(!isdigit(an[l]))
			{	
				k=0;
				break;
			}
		}
		if(i) i = atoi(n);
		if(j) j = atoi(m);
		if(k) k = atoi(an);
		if(i && j)
		{
			 k = i + j;
			 cout <<i<<" + "<<j<<" = "<<k<<endl;
		}
		else if(j && k)
		{
			i = k - j;
			cout <<i<<" + "<<j<<" = "<<k<<endl;
		}
		else if(i && k)
		{
			j = k - i;
			cout <<i<<" + "<<j<<" = "<<k<<endl;
		}
	}	

	return 0;
}