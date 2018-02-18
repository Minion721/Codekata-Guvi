#include <stdio.h>

int main(void) {
	int n,m;
	scanf("%d %d",&n,&m);
	int a[100],b[100],c[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	int k=0;
	if(n>m)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i]==b[j])
				{
					c[k]=a[i];
					k++;
					break;
				}
			}
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(b[i]==a[j])
				{
					c[k]=b[i];
					k++;
					break;
				}
			}
		}
	}
	for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(c[i]>c[j])
			{
				int temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for(int i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
	
	return 0;
}
