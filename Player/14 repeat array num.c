#include <stdio.h>

int main(void){
	int n,l,flag;
	scanf("%d %d",&n,&l);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==l)
		{
			flag=1;
			printf("yes");
			break;
		}
		else
		{
			flag=0;
		}
		if(flag==1)
		{
			break;
		}
	}
	int count=0;
	if(flag==0)
	{
	 printf("no");	
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]==l)
			{
				count++;
			}
		}
	}
	printf(" %d",count);

	return 0;
}
