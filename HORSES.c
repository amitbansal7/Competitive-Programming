#include <stdio.h>

// Runtime Error(SIGSEGV) -- output is right
// codechef - amitbanal7

main()
{
	int test , horses,s[100],i,j,k,diff;

	scanf("%d",&test);

	for(i=0 ; i<test ;i++)
	{
		scanf("%d",&horses);

		for(j=0 ; j<horses ;j++)
			scanf("%d",&s[j]);
		diff = s[0] + s[1] + s[2];

        for(k=0 ; k<horses-1 ;k++)
           for(j=i+1; j<horses ; j++)
        	 if((s[k]-s[j]) < diff)
        	 {
        	 	if(s[k]-s[j] > 0)
        		   diff = s[k]-s[j];

        		else
        			continue;

        	}

        printf("%d\n",diff);


	}






}