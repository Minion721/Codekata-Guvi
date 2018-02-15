#include <stdio.h>

int main(void) {
	char a[100];
	int flag;
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='b')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
