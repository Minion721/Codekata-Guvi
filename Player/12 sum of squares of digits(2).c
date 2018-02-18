#include <stdio.h>

int main(void){
	int n,re,j,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		re=n%10;
		j=re*re;
		sum=sum+j;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
