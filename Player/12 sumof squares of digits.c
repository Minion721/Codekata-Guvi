#include <stdio.h>

int main(void){
	int n,rem,j,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		j=rem*rem;
		sum=sum+j;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
