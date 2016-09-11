
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

    if(k>=1 || k<=8)
        ans=ans +1;

    else if(a-b-1==0)
        ans=3;

    else if(a-b<0)
       ans = a-b +(b-a)+6;


    else
        ans = ans-1;

    printf("%d",ans);

    return 0;
}




