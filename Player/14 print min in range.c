#include <stdio.h>

int main(void) {
	int n,l,r;
	scanf("%d %d %d",&n,&l,&r);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min;
	for(int i=0;i<n;i++)
	{
		while(a[i]==l)
		{
			 min=a[i];
			for(int j=i;a[j]<r;j++)
			{
				if(a[j+1]<a[j])
				{
					min=a[j+1];
				}
			}
			break;
		}
	}
	printf("%d",min);
	return 0;
}
