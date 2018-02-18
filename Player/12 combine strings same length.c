#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	char b[100],c[100];
	scanf("%s",a);
	scanf("%s",b);
	int n,m;
	n=strlen(a);
	m=strlen(b);
	int i,j,k;
	if(n!=m)
	{
		for(i=0;i<m;i++)
		{
			c[i]=a[i];
		}
	}
	for(j=i,k=0;j<(m+n),k<m;j++,k++)
	{
		c[j]=b[k];
	}
	printf("%s",c);
	return 0;
}
