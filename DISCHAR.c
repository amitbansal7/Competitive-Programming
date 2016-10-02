#include <stdio.h>
#include <string.h>

int main()
{
	int test,f,c;
	char s[100000];
	 int length,i,j;
	scanf("%d",&test);

	while(test--)
	{
		f=0;
		c=0;
		scanf("%s",&s);
		length = strlen(s);

		for(i = 0 ;i<length ;i++)
		{
			c=0;
			for(j=i+1 ; j<length ;j++)
			{
				if(s[i]!=s[j])
					c++;	
			}
			if(c==length-(i+1))
					f++;
	    }
		printf("%d\n",f);
	}
	return 0;
}