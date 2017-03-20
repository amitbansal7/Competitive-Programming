#include <stdio.h>
#include <stdlib.h>

// SPOJ - amitbansal7
// status - accepted
//FCTRL2 - Small factorials

int multiply(int x,int res[],int res_size)
{
	int carry =0 ;
	int i;
	int prod;

	for(i=0; i<res_size;i++)
	{
		prod = res[i]*x + carry;
		res[i] = prod%10;
		carry = prod/10;
	}

	while(carry)
	{
		res[res_size] = carry%10;
		carry = carry/10;
		res_size++;
	}

	return res_size;
	
}

void factorial(int n)
{
	int res[500];
	int res_size =1;
	res[0] = 1;

	for(int x=2; x<=n; x++)
		res_size = multiply(x,res,res_size);

	for(int i = res_size-1;i>=0;i--)
		printf("%d",res[i]);

}

int main(int argc, char const *argv[])
{
	int t,n,i;

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		factorial(n);
	}
	return 0;
}