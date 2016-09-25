#include<stdio.h>
#include<math.h>
// RECIPE.c
// Right Answer
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
 
      gcd = ArrayGCD(A,0,n-1);
 
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
 
int ArrayGCD(int a[], int first, int last)
{
    int x = 0, y = 0, gcd = 0;
    if(first == last)
    {
        gcd = a[first];
        return gcd;
    }
    else
    {
        x = ArrayGCD(a,first,(first+last)/2);
        y = ArrayGCD(a,(first+last)/2+1,last);
        if(x < 0)
        {
            x = -x;
        }
        if(y < 0)
        {
            y = -y;
        }
        while(x != y)
        {
            if(x > y)
            {
                x = x-y;
            }
            else
            {
                y = y-x;
            }
        }
        gcd = x;
        return gcd;
    }
}
 



/*
#include<stdio.h>
#include<math.h>
// RECIPE.c
// time limit exceeded
// codechef -- amitbansal7

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

      gcd = A[0];
       for(i=1;i<n;i++)
      {
          gcd = gcdi(gcd,A[i]); //calls the gcd() that we just created a while ago
      }

      

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

int gcdi(int a,int b)
{
    int t;
    while(a)
    {
        t = a;
        a = b%a;
        b = t;
    }
    return b;
}

*\





