#line 2 "TreeAndVertex.cpp"
#include <bits/stdc++.h>
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

class TreeAndVertex
{
	public:
	int get(vector <int> tree)
	{
		int n = tree.size();
		int deg[n+1];
		Mset(deg,0);
		int maxmst = INT_MIN;
		vector <int>adj[n+1];
		for(int i=0;i<n;i++)
		{
			adj[tree[i]].push_back(i+1);
			adj[i+1].push_back(tree[i]);
		}
		for(int i=0;i<=n;i++)
		{
			deg[i] = adj[i].size();
			if(maxmst < deg[i])
				maxmst = deg[i];
		}
		return maxmst;
	}
};
// BEGIN CUT HERE
#include <ctime>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		cout << "Testing TreeAndVertex (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1497115519;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		TreeAndVertex _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int tree[] = {0,0,0};
				_expected = 3;
				_received = _obj.get(vector <int>(tree, tree+sizeof(tree)/sizeof(int))); break;
			}
			case 1:
			{
				int tree[] = {0, 1, 2, 3};
				_expected = 2;
				_received = _obj.get(vector <int>(tree, tree+sizeof(tree)/sizeof(int))); break;
			}
			case 2:
			{
				int tree[] = {0, 0, 2, 2};
				_expected = 3;
				_received = _obj.get(vector <int>(tree, tree+sizeof(tree)/sizeof(int))); break;
			}
			case 3:
			{
				int tree[] = {0, 0, 0, 1, 1, 1};
				_expected = 4;
				_received = _obj.get(vector <int>(tree, tree+sizeof(tree)/sizeof(int))); break;
			}
			case 4:
			{
				int tree[] = {0, 1, 2, 0, 1, 5, 6, 1, 7, 4, 2, 5, 5, 8, 6, 2, 14, 12, 18, 10, 0, 6, 18, 2, 20, 11, 0, 11, 7, 12, 17, 3, 18, 31, 14, 34, 30, 11, 9};
				_expected = 5;
				_received = _obj.get(vector <int>(tree, tree+sizeof(tree)/sizeof(int))); break;
			}
			/*case 5:
			{
				int tree[] = ;
				_expected = ;
				_received = _obj.get(vector <int>(tree, tree+sizeof(tree)/sizeof(int))); break;
			}*/
			/*case 6:
			{
				int tree[] = ;
				_expected = ;
				_received = _obj.get(vector <int>(tree, tree+sizeof(tree)/sizeof(int))); break;
			}*/
			/*case 7:
			{
				int tree[] = ;
				_expected = ;
				_received = _obj.get(vector <int>(tree, tree+sizeof(tree)/sizeof(int))); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (_received == _expected)
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE


