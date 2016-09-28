#include <stdio.h>
#include <string.h>

// Runtime Error(SIGSEGV)  [Answer is correct]
// codechef - amitbansal7


int palingdrome(char s[] , int f ,int l);
 
int main()
{   char s[100],t[100];
	int test,i,j,k,l,c,temp,a,b,tlength;
 
	scanf("%s",s);
 
	tlength = strlen(s);
 
	for (a=0 ; a<tlength ; a++)
	{
		t[a]=s[a];
	}
 
	scanf("%d",&test);
 
	for(c = 0 ; c < test ; c++)
	{
		for (a=0 ; a<tlength ; a++)
	    { 
		  s[a]=t[a];
	    }
 
		scanf("%d %d %d %d",&i,&j,&k,&l);
 
		a = i-1;
		b= j-1;
 
		while(a<b)
		{
 
		  temp = s[a];
		  s[a] = s[b];
		  s[b] = temp;
		  a++;
		  b--;
 
		  palingdrome(s,k-1,l-1);
 
		}
	}

	return 0;
}
 
int palingdrome(char s[] , int f ,int l)
  {
  	int k,length,i;
 
  	length = l - f;
  	k=1;
 
  	if(length==1)
  	{
  		if(s[f]==s[l])
  			printf("YES\n");
 
  		else
  			printf("NO\n");
 
 
  	}
 
  	else
  	{
 
  		 while(f!=l)
        {
  	       if(s[f]==s[l])
  	      {
  		    f++;
  		    l--;
  	      }
 
  	      else 
  	      {
  		    k = 0;
  		    break;
  	      }
 
  	    }
 
  	
 
  	    if(k==0)
  		   printf("NO\n");
 
  	    else
  		   printf("YES\n");
 
  	}

  	return 0;
 
  } 

