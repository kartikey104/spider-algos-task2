/* 			TASK2 - B
1. Here I have done a very basic implementation of arrays and then a linear search. I am trying for hacker 2 mode, will update when done!!

*/
#include<stdlib.h>
#include<stdio.h>
int main()
{

	int n,q,i,l,u,v;			// n - array size, q - no of queires, i - index, l - lower bound, u - upper bound, v - value
	// get input
	scanf("%d\n%d",&n,&q);
	long long int *a;
	// allocate memory for array
	a = (long long int *)malloc((n+1)*sizeof(long long int));
	
		for(i=0;i<n+1;i++)
			a[i] = i;
		while(q--)
		{
			scanf("%d %d %d",&l,&u,&v);
			for(i=l;i<u+1;i++)
				a[i] += v;
		}
		long long int max = a[1];
		for(i=2;i<n+1;i++)
			if(a[i] > max)
				max = a[i];
		printf("%lld",max);

	free (a);
	return 0;
}
