/* 			TASK2 - B
*/
#include<stdio.h>
main()
{

	int n,q,i,l,u,v;
	// get input
	scanf("%d\n%d",&n,&q);
	long *a;
	// allocate memory for array
	a = (long*)malloc((n+1)*sizeof(long));
	//check if memory allocated
	if( a == NULL)
		printf("Memory not allocated");
	else
	{
		for(i=0;i<n+1;i++)
			a[i] = i;
		while(q--)
		{
			scanf("%d %d %d",&l,&u,&v);
			for(i=l;i<u+1;i++)
				a[i] += v;
		}
		long max = a[1];
		for(i=2;i<n+1;i++)
			if(a[i] > max)
				max = a[i];
		printf("%d",max);

	}
	return;
}