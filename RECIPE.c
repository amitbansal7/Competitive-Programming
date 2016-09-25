#include<stdio.h>
// RECIPE.c
// Wrong Answer
// codechef -- amitbansal7

 int main()
{
    int t,i,n,j,A[100],f;

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

      for(j=0 ; j<n ; j++)

        if(A[j]%A[0]==0)
            f++;

        printf("\n");


      if(f==n)
        for (j=0 ; j<n ; j++)
            printf("%d ",A[j]/A[0]);

        else 
            for (j=0 ; j<n ; j ++)
               printf("%d ",A[j]);
       }



    }
}

    return 0;
}