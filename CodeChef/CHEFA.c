#include "stdio.h"
// Correct Answer
// codechef -- amitbansal7

void merg(int *A,int *L,int lc,int *R,int rc)
{
	int i,j,k;
	i=0;j=0;k=0;

	while(i<lc && j<rc)
	{
		if(L[i] < R[j])
			A[k++] = L[i++];

		else
			A[k++] = R[j++];
	}
	while(i<lc)
		A[k++] = L[i++];

	while(j<rc)
		A[k++] = R[j++];

}

void mergesort(int *A,int n)
{
	int mid, *R, *L,i;
	if (n<2) return;

	mid  = n/2;

	L = (int*)malloc(mid*sizeof(int));
	R = (int*)malloc((n-mid)*sizeof(int));

	for(i=0;i<mid;i++)
		L[i] = A[i];

	for(i=mid;i<n;i++)
		R[i-mid] = A[i];

	mergesort(L,mid);
	mergesort(R,n-mid);
	merg(A,L,mid,R,n-mid);
	free(L);
	free(R);

} 


int main()
{
	int T,n,max,f,i;
	long long ans;
	int *p;

    int A[100005];
    p=A;
	scanf("%d",&T);

	while(T--)
	{
		
		scanf("%d",&n);

		//int *p = (int *)malloc(n*sizeof(int));

		for(i=0;i<n;i++)
			scanf("%d",(p+i));

		mergesort(p,n);
		
        ans=0;
		for(i=n-1;i>=0;i-=2)
			ans = ans + *(p+i);
        
        printf("%lld\n",ans);
        //free(p);

	}
	return 0;
}
