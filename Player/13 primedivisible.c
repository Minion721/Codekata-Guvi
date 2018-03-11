#include <stdio.h>

int main(void) {
	int n,flag;
	scanf("%d",&n);
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			for(int j=2;j<=i;j++)
			{
				if(i%j==0)
				{
					if(i==j)
					{
						printf(" %d",i);
						 flag=1;
						break;
					}
				
				if(flag==1)
				break;
				}
			}
		}
		
			
	}
	return 0;
}
