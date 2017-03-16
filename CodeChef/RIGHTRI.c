#include <stdio.h>
#include <math.h>
 
 
main()
{
    int t,x1,y1,x2,y2,x3,y3;
    float  s1,s2,s3;
    int f,count=0;
 
    scanf("%d",&t);
 
    while(t--)
    {
        f=0;
 
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
 
        s1 = ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
 
        s2 = ((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
 
        s3 = ((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
 
        if(s1 + s2  == s3)
            f=1;
 
        else if(s1 + s3  == s2)
            f=1;
 
        else if(s2 + s3  == s1)
            f=1;
 
        else
            f=0;
 
        if(f==1){
            count=count+1;
    }
 
    }
 
    printf("%d",count);
}
 