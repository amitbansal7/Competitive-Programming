#include<stdio.h>

int main()
{
    float b,n,i;
    int c,x;

    scanf("%d%f",&x,&b);
    c=x;
    i=x+0.50;
  if(x<=b){
       if(c%5==0)
       {
        n=b-x-0.50;
        printf("%.2f\n",n);
       }
       else printf("%.2f\n",b);
    }
    else printf("%.2f\n",b);
    return 0;


}
