#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int i=2;
	int flag=1;
	while(flag!=0)
	{
		if(n==i)
		{
			printf("yes");
			flag=0;
		}
		else
		{
			i=i*2;
			flag++;
		}
	}
	if(flag!=0)
	{
		printf("no");
	}
	
	return 0;
}
