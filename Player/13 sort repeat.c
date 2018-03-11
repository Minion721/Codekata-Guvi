#include <stdio.h>

int main(void) {
	int a[10];
	int n,k,j;
	scanf("%d %d",&n,&k);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i=i+j)
	{
		int count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if(count==k)
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}
