#include <stdio.h>

int main(void) 
{
	int nm,k;
	scanf("%d %d",&nm,&k);
	int a[nm],i,j,temp;
	for(i=0;i<nm;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(i==k-1)
		{
			printf("%d",a[i]);
		}
	}
	
	return 0;
}
