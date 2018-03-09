#include <stdio.h>

int main(void) {
	char a[10];
	scanf("%s",a);
	int i;
	int count=0,flag=1;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!='a' && a[i]!='b')
		{
			count++;
		}
		else
		{
			flag=0;
		}
	}
	if(count==1 ||count==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
