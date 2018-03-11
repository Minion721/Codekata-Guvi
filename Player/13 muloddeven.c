#include <stdio.h>

int main(void) {
	int a[10];
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int mul=1;
	for(i=0;i<n;i++)
	{
	 mul=mul*a[i];	
	}
	if(mul%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
