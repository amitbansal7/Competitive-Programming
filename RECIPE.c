#include<stdio.h>
// RECIPE.c
// Wrong Answer

 int main()
{
    int t,i,n,j,A[100],f;

    scanf("%d",&t);

    for(i=1 ; i<=t ; i++)
    {
        f=0;

      scanf("%d",&n);
      for(j=0 ; j<n ; j++)
      {
        scanf("%d",&A[j]);

      }

      for(j=0 ; j<n ; j++)

        if(A[j]%A[0]==0)
            f++;


      if(f==n)
        for (j=0 ; j<n ; j++)
            printf("%d ",A[j]/A[0]);

        else 
            for (j=0 ; j<n ; j ++)
               printf("%d ",A[j]);

        printf("\n");



    }

    return 0;
}
 