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

bool valid(char c){ return c!='0'; }
bool valid(char a,char b){ return a=='1' || (a=='2' && b<='6'); }

llu solve(string s,int i,llu DP[])
{
    if(i<=1)
        return 1;

    if(DP[i] != -1)
        return DP[i];

    llu a = 0;
    char b = s[i-1];
    char c = s[i-2];
    if(valid(b))
        a = solve(s,i-1,DP);

    if(valid(c,b))
        a += solve(s,i-2,DP);

    return DP[i] = a;
}

int main(int argc, char const *argv[])
{
    string s;
    while(1)
    {
        cin>>s;
        if(s[0] == '0')
            break;

        llu DP[s.size()+1];
        for(int i=0;i<=s.size();i++)
            DP[i] = -1;

        llu ans = solve(s,s.size(),DP);
        cout<<ans<<endl;
    }

    return 0;
}
