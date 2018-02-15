#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[10];
	int i=0;
	int rem;
	while(n!=0)
	{
		rem=n%2;
		a[i]=rem;
		i++;
		n=n/2;
	}
	int j=i;
	int count;
	for(int i=0;i<j;i++)
	{
		if(a[i]==1)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
