#include<stdio.h>

// working
//codechef username amitbansal7

int main()
{
    float b,n,i;
    int c,w;
    

    scanf("%d",&w);
    scanf("%f",&b);
    printf("\n");

    i=w+0.50;

    if(w%5==0 && i<=b)
    {
    	printf("%.2f",b-i);

    }

    else printf("%.2f",b);
   
   return 0;



}