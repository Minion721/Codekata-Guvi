#include <stdio.h>

int main(void) {
	int a[10];
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	int j, k,flag=0;
	for(j=2;j<100;j++)
	{
		for(i=0;i<n;i++)
		{
			int u=a[i];
			if(j%u!=0)
			{
				
				break;	
			}
			else
			{
				k=j;
				flag=1;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	printf("%d",k);
	return 0;
}
