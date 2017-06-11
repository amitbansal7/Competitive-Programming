#line 2 "TheAirTripDivTwo.cpp"
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
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

class TheAirTripDivTwo
{
	public:
	int find(vector <int> flights, int fuel)
	{
		if(flights.size() == 1 && fuel >= flights[0])
			return 1;
		int i;
		for(i=0;i<flights.size();i++)
		{
			if(fuel < 0)
				return i-1;
			fuel -= flights[i];

		}

		return i-1;
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
		cout << "Testing TheAirTripDivTwo (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1497118059;
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
		TheAirTripDivTwo _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int flights[] = {1, 2, 3, 4, 5, 6, 7};
				int fuel = 10;
				_expected = 4;
				_received = _obj.find(vector <int>(flights, flights+sizeof(flights)/sizeof(int)), fuel); break;
			}
			case 1:
			{
				int flights[] = {7, 6, 5, 4, 3, 2, 1};
				int fuel = 10;
				_expected = 1;
				_received = _obj.find(vector <int>(flights, flights+sizeof(flights)/sizeof(int)), fuel); break;
			}
			case 2:
			{
				int flights[] = {1};
				int fuel = 1000;
				_expected = 1;
				_received = _obj.find(vector <int>(flights, flights+sizeof(flights)/sizeof(int)), fuel); break;
			}
			case 3:
			{
				int flights[] = {8, 7, 7, 1, 5, 7, 9};
				int fuel = 21;
				_expected = 2;
				_received = _obj.find(vector <int>(flights, flights+sizeof(flights)/sizeof(int)), fuel); break;
			}
			/*case 4:
			{
				int flights[] = ;
				int fuel = ;
				_expected = ;
				_received = _obj.find(vector <int>(flights, flights+sizeof(flights)/sizeof(int)), fuel); break;
			}*/
			/*case 5:
			{
				int flights[] = ;
				int fuel = ;
				_expected = ;
				_received = _obj.find(vector <int>(flights, flights+sizeof(flights)/sizeof(int)), fuel); break;
			}*/
			/*case 6:
			{
				int flights[] = ;
				int fuel = ;
				_expected = ;
				_received = _obj.find(vector <int>(flights, flights+sizeof(flights)/sizeof(int)), fuel); break;
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


