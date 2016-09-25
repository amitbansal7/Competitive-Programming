#include<stdio.h>
#include<math.h>
// RECIPE.c
// Correct Answer
// codechef -- amitbansal7
 
int ArrayGCD(int a[], int first, int last);
 
 int main()
{
    int t,i,n,j,A[100],f,gcd;
 
    scanf("%d",&t);
 
    if(t<=100)
    {
 
    for(i=1 ; i<=t ; i++)
    {
        f=0;
 
      scanf("%d",&n);
      if(n>=2 && n<=50)
      {
      for(j=0 ; j<n ; j++)
      {
        scanf("%d",&A[j]);
 
      }
 
      gcd = gcdfinder(A,0,n-1);
 
      for(j=0 ; j<n ; j++)
 
        if(A[j]%gcd==0)
            f++;
 
        printf("\n");
 
 
      if(f==n)
        for (j=0 ; j<n ; j++)
            printf("%d ",A[j]/gcd);
 
        else 
            for (j=0 ; j<n ; j ++)
               printf("%d ",A[j]);
       }
 
 
 
    }
}
 
    return 0;
 
}
 


int gcdfinder(int A[],int first,int last)
{
  int x=0 , y=0 , gcd=0;
  if(first == last)
  {
    gcd = A[first];
    return gcd ;
  }
  

  else
  {
    x = gcdfinder(A,first,(first+last)/2);
    y = gcdfinder(A,(first+last)/2+1,last);

    if(x<0)
       x = -x;
    

    if(y<0)
      y = -y;

    while(x!=y)
    {
      if(x<y)
        y = y-x;

      else 
        x = x-y;

    }
     gcd = x;
        return gcd;


  }

}