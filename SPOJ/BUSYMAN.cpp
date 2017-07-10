/* Amit Bansal - @amitbansal7 */
#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int,int> &a, const pair<int,int> &b)
{
	return a.second < b.second;
}

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n;
		scanf("%d",&n);

		vector<pair<int,int> >act;

		for(int i=0;i<n;i++)
		{
			int s,e;
			scanf("%d %d",&s,&e);
			act.push_back(make_pair(s,e));
		}
		int activites = 0;

		sort(act.begin(),act.end(),compare);

		vector<pair<int,int > >::iterator it;
		int preve = -1;
		for(it = act.begin();it!=act.end();it++)
		{
			if((*it).first >= preve)
			{
				activites++;
				preve = (*it).second;
			}
		}

		printf("%d\n",activites);
	}
	return 0;
}
