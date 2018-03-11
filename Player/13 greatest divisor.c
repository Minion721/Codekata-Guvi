#include <stdio.h>

int main(void) {
	int a[10];
	int n;
	scanf("%d",&n);
	int i,max;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=1;j<100;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]%j!=0)
			{
				break;
			}
			else
			{
				max=j;
			}
		}
	}
	printf("%d",max);
	return 0;
}
