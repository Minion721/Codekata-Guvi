#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	scanf("%s",a);
	int flag=0;
	int i,j;
	j=strlen(a);
	
	for(i=2;i<j;i++)
	{
		if(j%i==0)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
