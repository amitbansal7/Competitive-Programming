#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	long long int t,n;

	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);

		switch(n%3)
		{
			case 0:
				printf("Ragini\n");
				break;

			case 1:
				printf("Hemlata\n");
				break;

			case 2:
				printf("Hemlata\n");
				break;
		}
	}
	
	return 0;
}