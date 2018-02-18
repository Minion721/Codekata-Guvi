#include <stdio.h>
#include <string.h>
int main(void) {
	char a[100],b[100];
	scanf("%s",a);
	int n;
	n=strlen(a);
	char temp;
	for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	int j=0;
	for(int i=0;i<(n*2);i++)
	{
		if(i%2==0)
		{
			
			b[i]=a[j];
			j++;
		}
		else
		{
			b[i]='-';
		}
	}
	printf("%s",b);
	return 0;
}
