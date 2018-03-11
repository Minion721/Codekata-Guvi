#include <stdio.h>

int main(void) {
	int a[10];
	int n,k;
	scanf("%d %d",&n,&k);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			flag=1;;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>k)
			{
				printf("%d",a[i]);
				break;
			}
		}
	}
	return 0;
}
