/* Amit Bansal - amitbansal7 */
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
#define Rep(n) for(int repr=0;repr<n;repr++)
#define Repi(i,n) for(int repr = i;repr<n;repr++)
#define Pi 3.14159
using namespace std;

int main()
{
    int g,b;

    while(1)
    {
        S(g);S(b);

        if(g==-1 || g==-1)
            break;

        if(g==0)
            printf("%d\n",b);

        else if(b==0)
            printf("%d\n",g);

        else if(b==g || b-g==1 || g-b==1)
            printf("1\n");

        else if(g==1)
            printf("%d\n",b/2 +(b%2!=0));

        else if(b==1)
            printf("%d\n",g/2 +(g%2!=0));

        else
        {
            if(g > b)
                printf("%d\n",g/(b+1) + (g %(b+1) !=0));

            else
                printf("%d\n",b/(g+1) + (b %(g+1) !=0));
        }

    }
    
}