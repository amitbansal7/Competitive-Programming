
//codechef username amitbansal7
// Not working
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,ans,i,j,cou,k;
    scanf("%d %d",&a,&b);

    ans=a-b;
    k=ans%10;

    if(k!=9)
    	ans =ans +1;
    else 
    	ans =ans -1;

    printf("%d\n",ans);

    return 0;

    
}




