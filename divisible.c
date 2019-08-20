#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter the number\n");
	scanf("%d", &n);
	n=n*2;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
	     {
			if(i%3==0)
		{
			sum=i+sum;
		}
            }
}
	printf("sum=%d\n",sum);
}
