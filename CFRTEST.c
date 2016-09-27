#include<stdio.h>

main(){

  int test,friends,i,days[100],ans=0,j,flag,k,z;

  scanf("%d",&test);

  if(test<=10000)
  {

    for(i=0;i<test;i++)
    {
       scanf("%d",&friends);

       if(friends<=50)
       {
           for(k=0 ; k<friends;k++)
               scanf("%d",&days[k]);

       }

       for(z=0 ; z<friends; z++)
       {
           flag=0;

           for(j=z+1 ; j<friends ;j++)
           {
               if(days[z]==days[j])
                  flag++;

           }

           if(flag==0)
              ans=ans+1;


       }

       printf("%d\n",ans);
       ans=0;
    }

  }

  return 0;
}
