#include <stdio.h>

int main(void) {
	char a[10];
	scanf("%s",a);
	int k;
	scanf("%d",&k);
	int i,u,v;
	int count=0,flag=1;
	for(i=k-1;a[i]!='\0';i=i+k)
	{
		 u=a[i];
		 v=u+32;
		a[i]=v;
	}
	printf("%s",a);
	return 0;
}
